csv = [
    "msgtype,init,16",
    "msgdata,init,gflen,u16,",
    "msgdata,init,globalfeatures,byte,gflen",
    "msgdata,init,flen,u16,",
    "msgdata,init,features,byte,flen",
    "msgdata,init,tlvs,init_tlvs,",
    "tlvtype,init_tlvs,networks,1",
    "tlvdata,init_tlvs,networks,chains,chain_hash,...",
    "tlvtype,init_tlvs,remote_addr,3",
    "tlvdata,init_tlvs,remote_addr,data,byte,...",
    "msgtype,error,17",
    "msgdata,error,channel_id,channel_id,",
    "msgdata,error,len,u16,",
    "msgdata,error,data,byte,len",
    "msgtype,ping,18",
    "msgdata,ping,num_pong_bytes,u16,",
    "msgdata,ping,byteslen,u16,",
    "msgdata,ping,ignored,byte,byteslen",
    "msgtype,pong,19",
    "msgdata,pong,byteslen,u16,",
    "msgdata,pong,ignored,byte,byteslen",
    "tlvtype,n1,tlv1,1",
    "tlvdata,n1,tlv1,amount_msat,tu64,",
    "tlvtype,n1,tlv2,2",
    "tlvdata,n1,tlv2,scid,short_channel_id,",
    "tlvtype,n1,tlv3,3",
    "tlvdata,n1,tlv3,node_id,point,",
    "tlvdata,n1,tlv3,amount_msat_1,u64,",
    "tlvdata,n1,tlv3,amount_msat_2,u64,",
    "tlvtype,n1,tlv4,254",
    "tlvdata,n1,tlv4,cltv_delta,u16,",
    "tlvtype,n2,tlv1,0",
    "tlvdata,n2,tlv1,amount_msat,tu64,",
    "tlvtype,n2,tlv2,11",
    "tlvdata,n2,tlv2,cltv_expiry,tu32,",
]
