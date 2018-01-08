import static org.junit.Assert.*;

import org.junit.Test;

import java.time.Duration;
import java.time.LocalDateTime;

public class TimeRangeTest {
    LocalDateTime BASE_DATE_TIME = LocalDateTime.parse("2016-01-08T12:13:14");

    @Test
    public void between() {
        TimeRange range = TimeRange.between(BASE_DATE_TIME, BASE_DATE_TIME.plusMinutes(5));
        assertEquals(range.getStart(), BASE_DATE_TIME);
        assertEquals(range.getEnd(), BASE_DATE_TIME.plusMinutes(5));
        assertEquals(range.getDuration(), Duration.ofMinutes(5));
    }
}
