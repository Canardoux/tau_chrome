// Relative import to be able to reuse the C sources.
// See the comment in ../tau_chrome.podspec for more information.
#include "../../src/tau_chrome.c"
#include "../../src/webaudio/analyser_handler.cc"
#include "../../src/webaudio/analyser_node.cc"
#include "../../src/webaudio/async_audio_decoder.cc"
#include "../../src/webaudio/audio_basic_processor_handler.cc"
#include "../../src/webaudio/audio_basic_processor_handler_test.cc"
#include "../../src/webaudio/audio_buffer.cc"
#include "../../src/webaudio/audio_buffer_source_handler.cc"
#include "../../src/webaudio/audio_buffer_source_node.cc"
#include "../../src/webaudio/audio_context.cc"
#include "../../src/webaudio/audio_context_autoplay_test.cc"
#include "../../src/webaudio/audio_context_test.cc"
#include "../../src/webaudio/audio_destination_handler.cc"
#include "../../src/webaudio/audio_destination_node.cc"
#include "../../src/webaudio/audio_graph_tracer.cc"
#include "../../src/webaudio/audio_handler.cc"
#include "../../src/webaudio/audio_listener.cc"
#include "../../src/webaudio/audio_listener_handler.cc"
#include "../../src/webaudio/audio_node.cc"
#include "../../src/webaudio/audio_node_input.cc"
#include "../../src/webaudio/audio_node_input_test.cc"
#include "../../src/webaudio/audio_node_output.cc"
#include "../../src/webaudio/audio_node_wiring.cc"
#include "../../src/webaudio/audio_param.cc"
#include "../../src/webaudio/audio_param_handler.cc"
#include "../../src/webaudio/audio_param_map.cc"
#include "../../src/webaudio/audio_param_timeline.cc"
#include "../../src/webaudio/audio_playout_stats.cc"
#include "../../src/webaudio/audio_processing_event.cc"
#include "../../src/webaudio/audio_scheduled_source_handler.cc"
#include "../../src/webaudio/audio_scheduled_source_node.cc"
#include "../../src/webaudio/audio_sink_info.cc"
#include "../../src/webaudio/audio_summing_junction.cc"
#include "../../src/webaudio/audio_worklet.cc"
#include "../../src/webaudio/audio_worklet_global_scope.cc"
#include "../../src/webaudio/audio_worklet_global_scope_test.cc"
#include "../../src/webaudio/audio_worklet_handler.cc"
#include "../../src/webaudio/audio_worklet_messaging_proxy.cc"
#include "../../src/webaudio/audio_worklet_node.cc"
#include "../../src/webaudio/audio_worklet_object_proxy.cc"
#include "../../src/webaudio/audio_worklet_processor.cc"
#include "../../src/webaudio/audio_worklet_processor_definition.cc"
#include "../../src/webaudio/audio_worklet_thread_test.cc"
#include "../../src/webaudio/base_audio_context.cc"
#include "../../src/webaudio/biquad_dsp_kernel.cc"
#include "../../src/webaudio/biquad_dsp_kernel_test.cc"
#include "../../src/webaudio/biquad_filter_handler.cc"
#include "../../src/webaudio/biquad_filter_node.cc"
#include "../../src/webaudio/biquad_processor.cc"
#include "../../src/webaudio/channel_merger_handler.cc"
#include "../../src/webaudio/channel_merger_node.cc"
#include "../../src/webaudio/channel_splitter_handler.cc"
#include "../../src/webaudio/channel_splitter_node.cc"
#include "../../src/webaudio/constant_source_handler.cc"
#include "../../src/webaudio/constant_source_node.cc"
#include "../../src/webaudio/convolver_handler.cc"
#include "../../src/webaudio/convolver_node.cc"
#include "../../src/webaudio/convolver_node_test.cc"
#include "../../src/webaudio/deferred_task_handler.cc"
#include "../../src/webaudio/delay_handler.cc"
#include "../../src/webaudio/delay_node.cc"
#include "../../src/webaudio/dynamics_compressor_handler.cc"
#include "../../src/webaudio/dynamics_compressor_node.cc"
#include "../../src/webaudio/dynamics_compressor_node_test.cc"
#include "../../src/webaudio/gain_handler.cc"
#include "../../src/webaudio/gain_node.cc"
#include "../../src/webaudio/iir_dsp_kernel.cc"
#include "../../src/webaudio/iir_filter_handler.cc"
#include "../../src/webaudio/iir_filter_node.cc"
#include "../../src/webaudio/iir_processor.cc"
#include "../../src/webaudio/inspector_helper_mixin.cc"
#include "../../src/webaudio/inspector_web_audio_agent.cc"
#include "../../src/webaudio/media_element_audio_source_handler.cc"
#include "../../src/webaudio/media_element_audio_source_node.cc"
#include "../../src/webaudio/media_stream_audio_destination_handler.cc"
#include "../../src/webaudio/media_stream_audio_destination_node.cc"
#include "../../src/webaudio/media_stream_audio_source_handler.cc"
#include "../../src/webaudio/media_stream_audio_source_node.cc"
#include "../../src/webaudio/offline_audio_completion_event.cc"
#include "../../src/webaudio/offline_audio_context.cc"
#include "../../src/webaudio/offline_audio_destination_handler.cc"
#include "../../src/webaudio/offline_audio_destination_node.cc"
#include "../../src/webaudio/offline_audio_worklet_thread.cc"
#include "../../src/webaudio/oscillator_handler.cc"
#include "../../src/webaudio/oscillator_node.cc"
#include "../../src/webaudio/panner_handler.cc"
#include "../../src/webaudio/panner_node.cc"
#include "../../src/webaudio/periodic_wave.cc"
#include "../../src/webaudio/realtime_analyser.cc"
#include "../../src/webaudio/realtime_audio_destination_handler.cc"
#include "../../src/webaudio/realtime_audio_destination_node.cc"
#include "../../src/webaudio/realtime_audio_worklet_thread.cc"
#include "../../src/webaudio/script_processor_handler.cc"
#include "../../src/webaudio/script_processor_node.cc"
#include "../../src/webaudio/script_processor_node_test.cc"
#include "../../src/webaudio/semi_realtime_audio_worklet_thread.cc"
#include "../../src/webaudio/setsinkid_resolver.cc"
#include "../../src/webaudio/stereo_panner_handler.cc"
#include "../../src/webaudio/stereo_panner_node.cc"
#include "../../src/webaudio/stereo_panner_node_test.cc"
#include "../../src/webaudio/wave_shaper_dsp_kernel.cc"
#include "../../src/webaudio/wave_shaper_handler.cc"
#include "../../src/webaudio/wave_shaper_node.cc"
#include "../../src/webaudio/wave_shaper_processor.cc"