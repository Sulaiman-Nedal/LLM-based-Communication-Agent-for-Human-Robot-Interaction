# nimbro_api

This package exposes the [OpenAI](https://platform.openai.com/docs/api-reference/completions) and [Mistral](https://docs.mistral.ai/api/#tag/chat) chat completions API to ROS2.

## Features

It targets ROS2 Foxy and Jazzy, probably supports other distributions as well and has [almost](https://github.com/AIS-Bonn/nimbro_api/blob/main/requirements.txt) no dependencies.

It features streamed and asynchronous prompting, tool usage, setting tool choices, JSON mode, vision inputs (web and local), setting model parameters, and editing the message history.

In addition, it also provides validity checks for all inputs and outputs (including JSON schema compliance when using tools), robust timeout behavior, as well as optional text normalization, and self-correction routines in case the model output deviates from what is expected.

## Installation

Simply include this repository together with [the repository containing all required interfaces](https://github.com/AIS-Bonn/nimbro_api_interfaces) in the source folder of your colcon workspace. After building them

`colcon build --packages-select nimbro_api nimbro_api_interfaces`

and re-sourcing

`source install/local_setup.bash`

various [launch files](https://github.com/AIS-Bonn/nimbro_api/tree/main/launch), [nodes](https://github.com/AIS-Bonn/nimbro_api/tree/main/nimbro_api/) and [demos](https://github.com/AIS-Bonn/nimbro_api/tree/main/nimbro_api/examples) will be available in your environment.

## Usage

For a step-by-step guide and further explanations see the Jupyter Notebook [tutorial](https://github.com/AIS-Bonn/nimbro_api/blob/main/nimbro_api/examples/tutorial.ipynb).

In general, there is a [_completions_](https://github.com/AIS-Bonn/nimbro_api/blob/main/nimbro_api/completions.py) node which represents a distinct LLM/VLM with its own model parameters and context, as well as a [_completions_multiplexer_](https://github.com/AIS-Bonn/nimbro_api/blob/main/nimbro_api/completions_multiplexer.py) node which governs multiple [_completions_](https://github.com/AIS-Bonn/nimbro_api/blob/main/nimbro_api/completions.py) nodes, serving as the communication endpoint to the user. To interface it from within rclcpp-based nodes, one must directly interact with the services it provides. When using rclpy-based nodes, [a class is provided](https://github.com/AIS-Bonn/nimbro_api/blob/main/nimbro_api/api_director.py) that defines all the required service clients, wraps them in more convenient Python methods and adds them to your node (see [tutorial](https://github.com/AIS-Bonn/nimbro_api/blob/main/nimbro_api/examples/tutorial.ipynb)).

The [gpt_launch.py](https://git.ais.uni-bonn.de/athome/nimbro_api/-/blob/master/launch/gpt_launch.py?ref_type=heads) and [mistral_launch.py](https://git.ais.uni-bonn.de/athome/nimbro_api/-/blob/master/launch/mistral_launch.py?ref_type=heads) launch files invoke such configurations and allow to easily modify default parameters and the number of required session instances.

API keys are read from the `OPENAI_API_KEY` and `MISTRAL_API_KEY` environment variables, which can be set via

`echo "export OPENAI_API_KEY='yourkey'" >> ~/.bashrc`

`echo "export MISTRAL_API_KEY='yourkey'" >> ~/.bashrc`

## License

`nimbro_api` is licensed under BSD-3.

## Author

Bastian Pätzold <paetzold@ais.uni-bonn.de>