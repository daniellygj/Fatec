package service;

public class RadarImpl implements Radar {

    public Boolean checkSpeed(int allowedSpeed, int vehicleSpeed) {
        return vehicleSpeed > allowedSpeed;
    }
}
