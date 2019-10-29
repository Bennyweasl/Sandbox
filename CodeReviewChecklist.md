# Pre-Code Review Checklist

## Before opening a pull request
- [ ] Pull destination branch in to source branch
- [ ] Verify merge doesn't have merge conflicts
- [ ] Verify functionality is still intact
- [ ] Code Style convention followed and formatted
- [ ] Static Code Analysis verified and mitigated
- [ ] Security Analysis Scan verified and mitigated
- [ ] Ensure Automated build system works when executed
- [ ] Update the SDP as required
- [ ] Update design artifacts as required
- [ ] Verify pull request is only the required work of the ticket
- [ ] Verify correct reviewers team are attached to pull request

# Code Review Checklist

## Project Standards
- [ ] Pull destination branch in to source branch
- [ ] Verify merge doesn't have merge conflicts
- [ ] Verify functionality is still intact
- [ ] Code Style convention followed and formatted
- [ ] Static Code Analysis verified and mitigated
- [ ] Security Analysis Scan verified and mitigated
- [ ] Ensure Automated build system works when executed
- [ ] Update the SDP as required
- [ ] Update design artifacts as required
- [ ] Verify pull request is only the required work of the ticket
- [ ] Verify correct reviewers team are attached to pull request

## Unit and Regression Test Quality
- [ ] Tests are atomic
- [ ] Tests are documented with pre & post conditions and test steps 
- [ ] Tests cover all public methods
- [ ] Tests cover all exceptions
- [ ] Tests should be fast (e.g. avoid long sleeps)
- [ ] Tests cover boundary conditions
- [ ] Bug fixes have a test to cover the condition
- [ ] Units test are separated from integration tests
- [ ] Verify assertion are specific and valid
- [ ] Verify Regression Suite still works
- [ ] Verify Code quality metrics improved or stayed the same

## Code Quality 

### Environment
- [ ] Build process is one step
- [ ] Unit tests run is one step

### Functions
- [ ] Verify there are not too many arguments
- [ ] No unused functions
- [ ] No output arguments
- [ ] No flag arguments

### Names
- [ ] Name are descriptive
- [ ] Names reflect the level of abstraction
- [ ] Standard nomenclature used as appicable (pattern name  or language convention)
- [ ] Unambiguous names
- [ ] Longer names for bigger scope
- [ ] No encodings (i.e. m_)

### Comments

- [ ] Information is appropriate
- [ ] No obsolete comments
- [ ] No redundant comments
- [ ] Well written comments
- [ ] No commented out code

### General
- [ ] Only one language per source file
- [ ] Expected behavior is implemented
- [ ] Boundary conditions are accounted for 
- [ ] No overridden or suppressed safety conditions and warnings
- [ ] No duplication of code (DRY principle followed)
- [ ] Abstractions are at the correct level
- [ ] Base class does not depend on derivatives
- [ ] Limited interfaces
- [ ] No dead code
- [ ] Related funcitons and variables are not vertically seperated
- [ ] Consistency in naming convention and function naming
- [ ] No clutter 
- [ ] No artificial coupling
- [ ] No feature envy
- [ ] No selector arguments passed to function
- [ ] Clear intent
- [ ] Proper placement of code (constanst etc. in the right location class and location)
- [ ] No inappropriate statics
- [ ] Uses explanatory variables
- [ ] Function names say what they do
- [ ] Algorithm is clear and obvious how it works
- [ ] Logical dependencies physical 
- [ ] Polymorphism instead of switches
- [ ] Follows projects standard convention
- [ ] All magic numbers are named constants
- [ ] Code is precise
- [ ] Structure instead of convention
- [ ] Conditionals are encapsulated
- [ ] Negative conditionals avoided
- [ ] Functions do one thing
- [ ] No hidden temporal couplings
- [ ] Code and structure are not arbitrary
- [ ] Boundary conditions are encapsulated
- [ ] Function only descends one level of abstraction
- [ ] Configurable data is at high levels
- [ ] No Transitive Navigation
