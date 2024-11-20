package com.ninevastudios.yodoads;


import org.json.JSONException;
import org.json.JSONObject;

public interface Yodo1MasSdkConfiguration {

    int getUserAge();

    Yodo1MasConsentFlowUserGeography getConsentFlowUserGeography();

    public static enum Yodo1MasConsentFlowUserGeography {
        UNKNOWN(0),
        GDPR(1),
        OTHER(2);

        private final int value;

        private Yodo1MasConsentFlowUserGeography(int value) {
            this.value = value;
        }

        public int getValue() {
            return value;
        }
    }

    JSONObject getJsonObject();
}
