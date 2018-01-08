import com.google.common.base.Preconditions;
import org.immutables.value.Value;
import org.immutables.value.Value.Check;
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

    @Check
    default void check() {
        Preconditions.checkArgument(!getDuration().isNegative(), "TimeRange with negative duration is not allowed.");
    }
}
