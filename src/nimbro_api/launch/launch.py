from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    llm = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            get_package_share_directory('nimbro_api'), '/launch/gpt_launch.py'])
    )

    images = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            get_package_share_directory('nimbro_api'), '/launch/images_launch.py'])
    )

    speech = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            get_package_share_directory('nimbro_api'), '/launch/speech_launch.py'])
    )

    embeddings = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            get_package_share_directory('nimbro_api'), '/launch/embeddings_launch.py'])
    )

    return LaunchDescription([
        llm, images, speech, embeddings
    ])
