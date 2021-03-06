#include "amplifier.h"
#include "ui_amplifier.h"

#include "mainwindow.h"

Amplifier::Amplifier(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Amplifier)
{
    ui->setupUi(this);

    // load window size
    QSettings settings;
    restoreGeometry(settings.value("Windows/amplifierWindowGeometry").toByteArray());

    // initialize variables
    gain = 0;
    volume = 0;
    treble = 0;
    middle = 0;
    bass = 0;

    cabinet = 0;
    noise_gate = 0;
    master_vol = 128;
    gain2 = 128;
    presence = 128;
    threshold = 0;
    depth = 128;
    bias = 128;
    sag = 1;
    brightness = 0;
    usb_gain = 0;

    changed = false;

    advanced = new Amp_Advanced(this);
    connect(ui->advancedButton, SIGNAL(clicked()), advanced, SLOT(open()));
    choose_amp(0);

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(choose_amp(int)));
    connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(set_gain(int)));
    connect(ui->dial_2, SIGNAL(valueChanged(int)), this, SLOT(set_volume(int)));
    connect(ui->dial_3, SIGNAL(valueChanged(int)), this, SLOT(set_treble(int)));
    connect(ui->dial_4, SIGNAL(valueChanged(int)), this, SLOT(set_middle(int)));
    connect(ui->dial_5, SIGNAL(valueChanged(int)), this, SLOT(set_bass(int)));
    connect(ui->setButton, SIGNAL(clicked()), this, SLOT(send_amp()));



    QShortcut *close = new QShortcut(QKeySequence(Qt::Key_Escape), this);
    connect(close, SIGNAL(activated()), this, SLOT(close()));
}

Amplifier::~Amplifier()
{
    QSettings settings;
    settings.setValue("Windows/amplifierWindowGeometry", saveGeometry());
    delete ui;
}

void Amplifier::get_amp_hid()
{
	fprintf(stderr,"Z");
}

void Amplifier::update_gain(int value)
{
	ui->dial->setValue(value);
}

void Amplifier::set_gain(int value)
{
    gain = value;
    changed = true;
    send_amp();
}

void Amplifier::set_volume(int value)
{
    volume = value;
    changed = true;
    send_amp();
}

void Amplifier::set_treble(int value)
{
    treble = value;
    changed = true;
    send_amp();
}

void Amplifier::set_middle(int value)
{
    middle = value;
    changed = true;
    send_amp();
}

void Amplifier::set_bass(int value)
{
    bass = value;
    changed = true;
    send_amp();
}

void Amplifier::set_cabinet(int value)
{
    cabinet = value;
    changed = true;
}

void Amplifier::set_noise_gate(int value)
{
    noise_gate = value;
    changed = true;
    send_amp();
}

void Amplifier::set_presence(int value)
{
    presence = value;
    changed = true;
    send_amp();
}

void Amplifier::set_gain2(int value)
{
    gain2 = value;
    changed = true;
    send_amp();
}

void Amplifier::set_master_vol(int value)
{
    master_vol = value;
    changed = true;
    send_amp();
}

void Amplifier::set_threshold(int value)
{
    threshold = value;
    changed = true;
    send_amp();
}

void Amplifier::set_depth(int value)
{
    depth = value;
    changed = true;
    send_amp();
}

void Amplifier::set_bias(int value)
{
    bias = value;
    changed = true;
    send_amp();
}

void Amplifier::set_sag(int value)
{
    sag = value;
    changed = true;
    send_amp();
}

void Amplifier::set_brightness(bool value)
{
    brightness = value;
    changed = true;
    send_amp();
}

void Amplifier::set_usb_gain(int value)
{
    usb_gain = value;
    changed = true;
    send_amp();
}

void Amplifier::choose_amp(int value)
{
    amp_num = value;
    changed = true;

    // set properties
    switch (value)
    {
    case FENDER_57_DELUXE:
        advanced->change_cabinet(cab57DLX);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: Fender '57 Delux");
        setAccessibleName("Amplifier: Fender '57 Delux");
        break;

    case FENDER_59_BASSMAN:
        advanced->change_cabinet(cabBSSMN);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: Fender '59 Bassman");
        setAccessibleName("Amplifier: Fender '59 Bassman");
        break;

    case FENDER_57_CHAMP:
        advanced->change_cabinet(cabCHAMP);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: Fender '57 Champ");
        setAccessibleName("Amplifier: Fender '57 Champ");
        break;

    case FENDER_65_DELUXE_REVERB:
        advanced->change_cabinet(cab65DLX);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: Fender '65 Deluxe Reverb");
        setAccessibleName("Amplifier: Fender '65 Deluxe Reverb");
        break;

    case FENDER_65_PRINCETON:
        advanced->change_cabinet(cab65PRN);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: Fender '65 Princeton");
        setAccessibleName("Amplifier: Fender '65 Princeton");
        break;

    case FENDER_65_TWIN_REVERB:
        advanced->change_cabinet(cab65TWN);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: Fender '65 Twin Reverb");
        setAccessibleName("Amplifier: Fender '65 Twin Reverb");
        break;

    case FENDER_SUPER_SONIC:
        advanced->change_cabinet(cabSS112);
        advanced->change_noise_gate(2);
        setWindowTitle("Amplifier: Fender Super-Sonic");
        setAccessibleName("Amplifier: Fender Super-Sonic");
        break;

    case BRITISH_60S:
        advanced->change_cabinet(cab2x12C);
        advanced->change_noise_gate(0);
        setWindowTitle("Amplifier: British 60's");
        setAccessibleName("Amplifier: British 60's");
        break;

    case BRITISH_70S:
        advanced->change_cabinet(cab4x12G);
        advanced->change_noise_gate(1);
        setWindowTitle("Amplifier: British 70's");
        setAccessibleName("Amplifier: British 70's");
        break;

    case BRITISH_80S:
        advanced->change_cabinet(cab4x12M);
        advanced->change_noise_gate(1);
        setWindowTitle("Amplifier: British 80's");
        setAccessibleName("Amplifier: British 80's");
        break;

    case AMERICAN_90S:
        advanced->change_cabinet(cab4x12V);
        advanced->change_noise_gate(3);
        setWindowTitle("Amplifier: American 90's");
        setAccessibleName("Amplifier: American 90's");
        break;

    case METAL_2000:
        advanced->change_cabinet(cab4x12G);
        advanced->change_noise_gate(2);
        setWindowTitle("Amplifier: Metal 2000");
        setAccessibleName("Amplifier: Metal 2000");
        break;

    default:
        break;
    }
}

// send settings to the amplifier
void Amplifier::send_amp()
{
    struct amp_settings settings;
    if(!changed)
        return;
    changed = false;

    settings.amp_num = amp_num;
    settings.gain = gain;
    settings.volume = volume;
    settings.treble = treble;
    settings.middle = middle;
    settings.bass = bass;
    settings.cabinet = cabinet;
    settings.noise_gate = noise_gate;
    settings.master_vol = master_vol;
    settings.gain2 = gain2;
    settings.presence = presence;
    settings.threshold = threshold;
    settings.depth = depth;
    settings.bias = bias;
    settings.sag = sag;
    settings.brightness = brightness;
    settings.usb_gain = usb_gain;

    ((MainWindow*)parent())->set_amplifier(settings);
}

void Amplifier::load(struct amp_settings settings)
{
    changed = true;

    ui->comboBox->setCurrentIndex(settings.amp_num);
    ui->dial->setValue(settings.gain);
    ui->dial_2->setValue(settings.volume);
    ui->dial_3->setValue(settings.treble);
    ui->dial_4->setValue(settings.middle);
    ui->dial_5->setValue(settings.bass);

    advanced->change_cabinet(settings.cabinet);
    advanced->change_noise_gate(settings.noise_gate);

    advanced->set_master_vol(settings.master_vol);
    advanced->set_gain2(settings.gain2);
    advanced->set_presence(settings.presence);
    advanced->set_depth(settings.depth);
    advanced->set_threshold(settings.threshold);
    advanced->set_bias(settings.bias);
    advanced->set_sag(settings.sag);
    advanced->set_brightness(settings.brightness);
    advanced->set_usb_gain(settings.usb_gain);
}

void Amplifier::get_settings(struct amp_settings *settings)
{
    settings->amp_num = amp_num;
    settings->gain = gain;
    settings->volume = volume;
    settings->treble = treble;
    settings->middle = middle;
    settings->bass = bass;
    settings->cabinet = cabinet;
    settings->noise_gate = noise_gate;
    settings->master_vol = master_vol;
    settings->gain2 = gain2;
    settings->presence = presence;
    settings->threshold = threshold;
    settings->depth = depth;
    settings->bias = bias;
    settings->sag = sag;
    settings->brightness = brightness;
    settings->usb_gain = usb_gain;
}

void Amplifier::enable_set_button(bool value)
{
    ui->setButton->setEnabled(value);
}
