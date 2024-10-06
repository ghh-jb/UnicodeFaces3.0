#define kUFBundleID "com.ghh.unicodefaces"
#define kUFBundlePath @"/var/jb/Library/PreferenceBundles/UnicodeFaces.bundle"
#define kUFPreferencesNotification [NSString stringWithFormat:@"%@/preferencesChanged", @kUFBundleID]

#define kUFDefaultFaces @[@"¯\\_(ツ)_/¯", @"(⌐■_■)", @"๏̯͡๏﴿", @"q(●‿●)p", @"◎⃝ _◎⃝ ;", @"╭∩╮(-_-)╭∩╮", @"ಠ_ಠ", @"ಠ‿ಠ", @"ಠ╭╮ಠ", @"(ง’̀-’́)ง", @"ꏱ𐐃.𐐃ꎍ", @"(ಥ﹏ಥ)", @"ᕕ( ᐛ )ᕗ", @"◉_◉", @"( ◕ ◡ ◕ )", @"(╯°□°）╯︵ ┻━┻", @"┬─┬ノ( º _ ºノ)", @"(ு८ு_ .:)", @"ヽ(｀Д´)ﾉ", @"( ͡° ͜ʖ ͡°)", @"╿︡O͟-O︠╿", @"ʕ•ᴥ•ʔ", @"ʘ̃˻ʘ̃", @"༼ ༎ຶ ෴ ༎ຶ༽", @"(☞ﾟヮﾟ)☞ ", @"(ᵔᴥᵔ)", @"[̲̅$̲̅(̲̅5̲̅)̲̅$̲̅]", @"ヽ༼ຈل͜ຈ༽ﾉ", @"(´･ω･`)", @"(・_・、)(_・、 )(・、 )", @"ლ,ᔑ•ﺪ͟͠•ᔐ.ლ", @"⨀⦢⨀", @"º╲˚\\╭ᴖ_ᴖ╮/˚╱º", @"º(•♠•)º", @"✌ ⎦˚◡˚⎣ ✌"]

#define TRANSLATE_TEXT(text) NSLocalizedStringFromTableInBundle(text, @"Root", [NSBundle bundleForClass:self.class], nil)
