package com.company;

public class Keyboard {
    private String lang;
    private int inch;
    private String manufacturer;

    public Keyboard(){};
    public Keyboard(String lang, int inch, String manufacturer) {
        this.lang = lang;
        this.inch = inch;
        this.manufacturer = manufacturer;
    }

    public String getLang() {
        return lang;
    }

    public void setLang(String lang) {
        this.lang = lang;
    }

    public int getInch() {
        return inch;
    }

    public void setInch(int inch) {
        this.inch = inch;
    }

    public String getManufacturer() {
        return manufacturer;
    }

    public void setManufacturer(String manufacturer) {
        this.manufacturer = manufacturer;
    }
}
