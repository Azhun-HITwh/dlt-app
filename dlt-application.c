#include <dlt/dlt.h>

DLT_DECLARE_CONTEXT(ctx);
DLT_DECLARE_CONTEXT(ctx_2);


int main(int argc, char const *argv[])
{
    DLT_REGISTER_APP("TAPP", "Test Application for Logging");
    DLT_REGISTER_CONTEXT(ctx, "TES1", "Test Context for Logging");
    DLT_LOG(ctx, DLT_LOG_ERROR, DLT_CSTRING("This is an error"));
    DLT_REGISTER_CONTEXT(ctx_2, "TES2", "Test Context2 for Logging");
    DLT_LOG(ctx_2, DLT_LOG_INFO, DLT_CSTRING("This is an INFO"));
    DLT_UNREGISTER_CONTEXT(ctx);
    DLT_UNREGISTER_CONTEXT(ctx_2);
	DLT_UNREGISTER_APP();

    return 0;
}
