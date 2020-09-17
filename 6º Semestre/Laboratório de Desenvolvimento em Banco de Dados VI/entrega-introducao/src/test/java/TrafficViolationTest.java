import org.junit.Test;
import service.CheckSpeed;

import static org.junit.Assert.assertTrue;

public class TrafficViolationTest {

    private CheckSpeed checkSpeed;

    @Test
    public void hasSpeedInfraction_test() {
        int allowedSpeed = 100;
        int vehicleSpeed = 120;

        boolean infraction = checkSpeed.checkSpeed(allowedSpeed, vehicleSpeed);

        assertTrue(infraction);
    }

    @Test
    public void hasNoSpeedInfraction_test() {
        int allowedSpeed = 100;
        int vehicleSpeed = 80;

        boolean infraction = checkSpeed.checkSpeed(allowedSpeed, vehicleSpeed);

        assertTrue(infraction);
    }

}
