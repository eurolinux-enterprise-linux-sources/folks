static const TpCMParamSpec tp_test_contact_list_tp_test_params[] = {
  { "account", "s", G_TYPE_STRING,
    TP_CONN_MGR_PARAM_FLAG_REQUIRED | TP_CONN_MGR_PARAM_FLAG_REGISTER,
    NULL, /* default */
    G_STRUCT_OFFSET (TpTestParams, account), /* struct offset */
    account_param_filter, /* filter */
    NULL, /* filter data */
    NULL /* setter data */ },
  { "simulation-delay", "u", G_TYPE_UINT,
    0,
    GUINT_TO_POINTER (1000), /* default */
    G_STRUCT_OFFSET (TpTestParams, simulation_delay), /* struct offset */
    NULL, /* filter */
    NULL, /* filter data */
    NULL /* setter data */ },
  { NULL }
};
