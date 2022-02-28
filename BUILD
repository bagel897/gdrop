#For compile commands
load("@hedron_compile_commands//:refresh_compile_commands.bzl", "refresh_compile_commands")

refresh_compile_commands(
    name = "refresh_compile_commands",

    # Specify the targets of interest.
    # For example, specify a dict of targets and their arguments:
    targets = {
      "//gdrop:core": "-s --check_visibility=false", 
    },
    # For more details, feel free to look into refresh_compile_commands.bzl if you want.
)
