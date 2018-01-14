# References
- [Dagger](https://google.github.io/dagger/)

# Summary
- Component
  - An interface annotated with `@Component`. Dagger generates an implementation class
        of the interface whose name is the same as the interface prefixed with `Dagger`.
  - A component interface declares objects that the interface can assemble by calling
        consructors annotated with `@Inject` or a module's method annotated with `@Provides`.
  - A generated component implementation can be built with a usual builder pattern that
        takes module instances.
    - If all of a component's modules can be instantiated with default constuctors or have
        only static methods, Dagger generates a shortcut `create()` method and you can bypass
        the build step.
- Module
   - A class that has methods annotated with `@Provides`.  It can be abstract if all `@Provides`
        methods are static.
