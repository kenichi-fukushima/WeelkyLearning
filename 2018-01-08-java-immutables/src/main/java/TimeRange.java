import org.immutables.value.Value.Derived;
import org.immutables.value.Value.Immutable;

import java.time.Duration;
import java.time.LocalDateTime;

@Immutable
public interface TimeRange {
    public LocalDateTime getStart();
    public LocalDateTime getEnd();

    @Derived
    default public Duration getDuration() {
        return Duration.between(getStart(), getEnd());
    }

    public static TimeRange between(LocalDateTime start, LocalDateTime end) {
        return ImmutableTimeRange.builder().start(start).end(end).build();
    }
}
