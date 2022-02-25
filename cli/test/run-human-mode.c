#include "config.h"
#include "config_test.h"
#include <common/amount.h>
#include <common/bigsize.h>
#include <common/channel_id.h>
#include <common/json_stream.h>
#include <common/node_id.h>
#include <common/setup.h>
#include <common/wireaddr.h>
#include <fcntl.h>
#include <sys/socket.h>

int test_main(int argc, char *argv[]);
ssize_t test_read(int fd, void *buf, size_t len);
int test_socket(int domain, int type, int protocol);
int test_connect(int sockfd, const struct sockaddr *addr,
		 socklen_t addrlen);
int test_getpid(void);
int test_printf(const char *format, ...);
int test_chdir(const char *path);

#define main test_main
#define cli_read test_read
#define socket test_socket
#define connect test_connect
#define getpid test_getpid
#define printf test_printf
#define chdir test_chdir

  #include "../lightning-cli.c"
#undef main

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire_amount_msat */
struct amount_msat fromwire_amount_msat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_msat called!\n"); abort(); }
/* Generated stub for fromwire_amount_sat */
struct amount_sat fromwire_amount_sat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_sat called!\n"); abort(); }
/* Generated stub for fromwire_bigsize */
bigsize_t fromwire_bigsize(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bigsize called!\n"); abort(); }
/* Generated stub for fromwire_channel_id */
bool fromwire_channel_id(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
			 struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_channel_id called!\n"); abort(); }
/* Generated stub for fromwire_node_id */
void fromwire_node_id(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct node_id *id UNNEEDED)
{ fprintf(stderr, "fromwire_node_id called!\n"); abort(); }
/* Generated stub for fromwire_wireaddr */
bool fromwire_wireaddr(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "fromwire_wireaddr called!\n"); abort(); }
/* Generated stub for json_add_member */
void json_add_member(struct json_stream *js UNNEEDED,
		     const char *fieldname UNNEEDED,
		     bool quote UNNEEDED,
		     const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "json_add_member called!\n"); abort(); }
/* Generated stub for json_member_direct */
char *json_member_direct(struct json_stream *js UNNEEDED,
			 const char *fieldname UNNEEDED, size_t extra UNNEEDED)
{ fprintf(stderr, "json_member_direct called!\n"); abort(); }
/* Generated stub for log_level_name */
const char *log_level_name(enum log_level level UNNEEDED)
{ fprintf(stderr, "log_level_name called!\n"); abort(); }
/* Generated stub for log_level_parse */
bool log_level_parse(const char *levelstr UNNEEDED, size_t len UNNEEDED,
		     enum log_level *level UNNEEDED)
{ fprintf(stderr, "log_level_parse called!\n"); abort(); }
/* Generated stub for towire_amount_msat */
void towire_amount_msat(u8 **pptr UNNEEDED, const struct amount_msat msat UNNEEDED)
{ fprintf(stderr, "towire_amount_msat called!\n"); abort(); }
/* Generated stub for towire_amount_sat */
void towire_amount_sat(u8 **pptr UNNEEDED, const struct amount_sat sat UNNEEDED)
{ fprintf(stderr, "towire_amount_sat called!\n"); abort(); }
/* Generated stub for towire_bigsize */
void towire_bigsize(u8 **pptr UNNEEDED, const bigsize_t val UNNEEDED)
{ fprintf(stderr, "towire_bigsize called!\n"); abort(); }
/* Generated stub for towire_channel_id */
void towire_channel_id(u8 **pptr UNNEEDED, const struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "towire_channel_id called!\n"); abort(); }
/* Generated stub for towire_node_id */
void towire_node_id(u8 **pptr UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "towire_node_id called!\n"); abort(); }
/* Generated stub for towire_wireaddr */
void towire_wireaddr(u8 **pptr UNNEEDED, const struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "towire_wireaddr called!\n"); abort(); }
/* Generated stub for version_and_exit */
char *version_and_exit(const void *unused UNNEEDED)
{ fprintf(stderr, "version_and_exit called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int test_socket(int domain UNUSED, int type UNUSED, int protocol UNUSED)
{
	/* We give a real fd, as it writes to it */
	return open("/dev/null", O_WRONLY);
}

int test_connect(int sockfd UNUSED, const struct sockaddr *addr UNUSED,
		 socklen_t addrlen UNUSED)
{
	return 0;
}

int test_getpid(void)
{
	return 9999;
}

int test_printf(const char *fmt UNUSED, ...)
{
	return 0;
}

int test_chdir(const char *path)
{
	return 0;
}

static const char *response =
	"{ \"jsonrpc\":\"2.0\","
	"\"id\":\"lightning-cli-9999\","
	"\"result\":"
	"{\"# version\":\"v0.9.0-240-gd7ff74e-modded\",\"lightning-dir\":\"/home/rusty/.lightning\",\"network\":\"testnet\",\"allow-deprecated-apis\":false,\"rpc-file\":\"lightning-rpc\",\"plugins\":[{\"path\":\"/home/rusty/.lightning/plugins/summary/summary.py\",\"name\":\"summary.py\",\"options\":{\"summary-currency\":\"USD\",\"summary-currency-prefix\":\"USD $\",\"summary-availability-interval\":\"300\",\"summary-availability-window\":\"72\"}}],\"important-plugins\":[{\"path\":\"/home/rusty/lightning/lightningd/../plugins/autoclean\",\"name\":\"autoclean\",\"options\":{\"autocleaninvoice-cycle\":null,\"autocleaninvoice-expired-by\":null}},{\"path\":\"/home/rusty/lightning/lightningd/../plugins/bcli\",\"name\":\"bcli\",\"options\":{\"bitcoin-datadir\":null,\"bitcoin-cli\":null,\"bitcoin-rpcuser\":null,\"bitcoin-rpcpassword\":null,\"bitcoin-rpcconnect\":null,\"bitcoin-rpcport\":null,\"bitcoin-retry-timeout\":null,\"commit-fee\":null,\"dev-max-fee-multiplier\":null}},{\"path\":\"/home/rusty/lightning/lightningd/../plugins/fundchannel\",\"name\":\"fundchannel\"},{\"path\":\"/home/rusty/lightning/lightningd/../plugins/keysend\",\"name\":\"keysend\"},{\"path\":\"/home/rusty/lightning/lightningd/../plugins/pay\",\"name\":\"pay\",\"options\":{\"disable-mpp\":false}}],\"disable-plugin\":[],\"always-use-proxy\":false,\"daemon\":\"false\",\"wallet\":\"sqlite3:///home/rusty/.lightning/testnet/lightningd.sqlite3\",\"wumbo\":false,\"wumbo\":false,\"rgb\":\"031a34\",\"alias\":\"SLICKERMASTER-40-gd7ff74e-modded\",\"pid-file\":\"/home/rusty/.lightning/lightningd-testnet.pid\",\"ignore-fee-limits\":true,\"watchtime-blocks\":6,\"max-locktime-blocks\":2016,\"funding-confirms\":1,\"commit-fee-min\":0,\"commit-fee-max\":0,\"cltv-delta\":6,\"cltv-final\":10,\"commit-time\":10,\"fee-base\":1,\"rescan\":30,\"fee-per-satoshi\":10,\"max-concurrent-htlcs\":483,\"min-capacity-sat\":10000,\"bind-addr\":\":9736\",\"announce-addr\":\"128.199.202.168:9736\",\"announce-addr\":\"[2400:6180:0:d0::5cd2:a001]:9736\",\"offline\":\"false\",\"autolisten\":true,\"disable-dns\":\"false\",\"enable-autotor-v2-mode\":\"false\",\"encrypted-hsm\":false,\"rpc-file-mode\":\"0600\",\"log-level\":\"DEBUG\",\"log-prefix\":\"lightningd\",\"log-file\":\"/home/rusty/logs/lightningd-testnet.log\",\"dev-no-reconnect\":\"false\",\"dev-allow-localhost\":\"false\",\"dev-bitcoind-poll\":30,\"dev-fast-gossip\":\"false\",\"dev-fast-gossip-prune\":\"false\",\"dev-gossip-time\":0,\"dev-max-funding-unconfirmed-blocks\":2016,\"dev-no-htlc-timeout\":\"false\",\"dev-fail-process-onionpacket\":\"false\",\"dev-no-version-checks\":\"false\",\"dev-builtin-plugins-unimportant\":\"false\"}"
	"}\n\n";

static size_t response_off, max_read_return;

ssize_t test_read(int fd UNUSED, void *buf, size_t len)
{
	if (len > max_read_return)
		len = max_read_return;
	if (len > strlen(response + response_off))
		len = strlen(response + response_off);

	memcpy(buf, response + response_off, len);
	response_off += len;
	return len;
}

int main(int argc UNUSED, char *argv[])
{
	common_setup(argv[0]);

	char *fake_argv[] = { argv[0], "--lightning-dir=/tmp/", "-H", "listconfigs", "-N", "none", NULL };

	response_off = 0;
	max_read_return = -1;
	assert(test_main(6, fake_argv) == 0);
	assert(!taken_any());
	common_shutdown();
	return 0;
}
