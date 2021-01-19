package com.company;

public class Motherboard {
    private String version;
    private int mode;
    private String manufacturer;

    public Motherboard(){}

    public Motherboard(String version, int mode, String manufacturer) {
        this.version = version;
        this.mode = mode;
        this.manufacturer = manufacturer;
    }

    public String getVersion() {
        return version;
    }

    public void setVersion(String version) {
        this.version = version;
    }

    public int getMode() {
        return mode;
    }

    public void setMode(int mode) {
        this.mode = mode;
    }

    public String getManufacturer() {
        return manufacturer;
    }

    public void setManufacturer(String manufacturer) {
        this.manufacturer = manufacturer;
    }
}
