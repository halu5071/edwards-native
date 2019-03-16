/*
 * Created by Yasunori Horii on 2019/03/08.
 */

#include <gtest/gtest.h>
#include "../library.h"
#include "../point.h"

static point basePoint{
  mpz_class("15112221349535400772501151409588531511454012693041857206046113283949847762202", BASE),
  mpz_class("46316835694926478169428394003475163141307993866256225615783033603165251855960", BASE)
};

TEST(scalarTest, success_scalar_multiply_1) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("1234", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "55556569241314067156494303609322045323771151550641480329783949256943018472903");
  EXPECT_EQ(destClassY.get_str(BASE), "32784530584814531279135473125766128158866185447326682367874410721387968224179");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("35", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "57359645701093248420816504207718352998047016588956650167590481162962813908715");
  EXPECT_EQ(destClassY.get_str(BASE), "838393992334862776911110796605108112109744556731718955387967463686536280019");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_2) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("42", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "42401546527934959338467043669041894126909913971352700899843678753185653162089");
  EXPECT_EQ(destClassY.get_str(BASE), "29949868796287605534742663495443951076253075016671145616113943856256572857038");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_3) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("432", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "23185317896379073314204101893430457999697066311342414344062435044512680235749");
  EXPECT_EQ(destClassY.get_str(BASE), "42847675453154813244888611769895755140794195615314248090347895993998306218966");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_4) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("4832", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "32920418660689032145069773849803705573656062787048336205043251221216966225190");
  EXPECT_EQ(destClassY.get_str(BASE), "56026383279754517481079425070574944181225761936659225475464651151749539406243");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_5) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("24832", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "11631595154394978843377133379453165825237754642975162605149905885560815411567");
  EXPECT_EQ(destClassY.get_str(BASE), "56190549384332382140433146152935211030343420853081847442949013909032210010540");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_6) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("724832", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "39792031458728826692492225466976114446949715078408820123383098037441723337016");
  EXPECT_EQ(destClassY.get_str(BASE), "16142565858681328610009623699731614022500366825115680685420858027705801405463");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_7) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("3724832", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "37537294006832992264107349739659202882484087451165982252596111360744577176394");
  EXPECT_EQ(destClassY.get_str(BASE), "44626458173786089741798966635832701770959815761801536704196433781061480576575");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_8) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("4024832", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "57565266020331081545170656735060038886618841117120379146746714107610578773517");
  EXPECT_EQ(destClassY.get_str(BASE), "16504065882925451281818175768704195895857460814495240352462888679408028407735");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_9) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("4194303", BASE); // 4194303: OK!! 4194304: NG

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "49222229773374532393239607783181959645775503987541985433899891235920228553519");
  EXPECT_EQ(destClassY.get_str(BASE), "50060870150529187365223388431884807734754073327434560837855405153975424635094");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_1_tmp_10) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("4194304", BASE); // 4194303: OK!! 4194304: NG

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "26993053454492735757774095526931594398941435313067218024451801426996192317244");
  EXPECT_EQ(destClassY.get_str(BASE), "20756573878643363325793821026438350840612369149764266371668034898098235986297");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_2) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("20266806181347897178517736945403300566236311925948585575972021784256181966831", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "36568395279531091001405240627702774400329345357946000277861114291457062189012");
  EXPECT_EQ(destClassY.get_str(BASE), "6892543919216139430465404745243127488161491607535545431263766463424432810420");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_3) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("11675954373387894284288004270057647646117187555908725144338394611307421402153", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "2550105584539864958223359997109982244652817874690374654323009420113342284222");
  EXPECT_EQ(destClassY.get_str(BASE), "32100423734119761214020102691557112218747037854384677234614616607240732191696");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_4) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("53796438671359824102085853653404738634771041230653645888564199631429825277660", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "55567266549953732748489637086272210307507483701392087766383203587162091263037");
  EXPECT_EQ(destClassY.get_str(BASE), "39648261582079248220577879738713959882783855750578332978656472445048155089907");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_5) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("32610704945606948033834599741453719010166132071117736619400925734673110257760", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "46453596183992846648371334773013814104200062737923250995844281103986991912429");
  EXPECT_EQ(destClassY.get_str(BASE), "25430834724210084628427024029388177706947140598135008372913684687859787885119");

  mpz_clear(destX);
  mpz_clear(destY);
}

TEST(scalarTest, success_scalar_multiply_6) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("7", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "9199134265559022971505535402808359556995554859516252602543778295037484220679");
  EXPECT_EQ(destClassY.get_str(BASE), "22512087849695599276028560866629687720820254811233262850576678203618951717560");

  mpz_clear(destX);
  mpz_clear(destY);
}
