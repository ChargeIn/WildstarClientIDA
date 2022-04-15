#include "../winhttp.h"

//----- (00000001407F83D0) ----------------------------------------------------
__int64 __fastcall sub_1407F83D0(double a1)
{
	if (HIDWORD(a1) == 2146435072 && !LODWORD(a1))
		return 1i64;
	if (HIDWORD(a1) == -1048576 && !LODWORD(a1))
		return 2i64;
	if ((HIWORD(a1) & 0x7FF8) == 32760)
		return 3i64;
	if ((HIWORD(a1) & 0x7FF8) == 32752 && ((HIDWORD(a1) & 0x7FFFF) != 0 || LODWORD(a1)))
		return 4i64;
	return 0i64;
}

