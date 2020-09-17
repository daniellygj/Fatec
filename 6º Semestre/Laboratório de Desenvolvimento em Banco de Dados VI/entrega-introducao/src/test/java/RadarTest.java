import org.junit.Test;
import service.Radar;
import service.RadarImpl;

import static junit.framework.TestCase.assertFalse;
import static org.junit.Assert.assertTrue;

public class RadarTest {

    private Radar radar;

    public RadarTest() {
        this.radar = new RadarImpl();
    }

    @Test
    public void hasSpeedInfraction_test() {
        int allowedSpeed = 100;
        int vehicleSpeed = 120;

        boolean infraction = radar.checkSpeed(allowedSpeed, vehicleSpeed);

        assertTrue(infraction);
    }

    @Test
    public void hasNoSpeedInfraction_test() {
        int allowedSpeed = 100;
        int vehicleSpeed = 80;

        boolean infraction = radar.checkSpeed(allowedSpeed, vehicleSpeed);

        assertFalse(infraction);
    }

}
