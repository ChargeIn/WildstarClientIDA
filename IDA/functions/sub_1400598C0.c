#include "../winhttp.h"

//----- (00000001400598C0) ----------------------------------------------------
int* sub_1400598C0()
{
	int* result; // rax
	__int64 v1; // rbx
	int* v2; // rcx
	int* v3; // rax

	result = sub_14018C320(0i64, 0x268ui64, 0);
	v1 = (__int64)result;
	if (result)
	{
		v2 = result + 46;
		*((_BYTE*)result + 8) = 8;
		*(_QWORD*)result = 0i64;
		*((_BYTE*)result + 216) = 33;
		*((_QWORD*)result + 4) = result + 46;
		*(_WORD*)((char*)result + 9) = 97;
		*((_QWORD*)result + 8) = 0i64;
		*((_QWORD*)result + 11) = 0i64;
		*((_QWORD*)result + 21) = 0i64;
		*((_QWORD*)result + 14) = 0i64;
		*(int*)((char*)result + 98) = 0x1000000;
		*((_QWORD*)result + 13) = 0i64;
		*((_QWORD*)result + 19) = 0i64;
		*((_WORD*)result + 48) = 0;
		*((_QWORD*)result + 5) = 0i64;
		*((_QWORD*)result + 10) = 0i64;
		*((_QWORD*)result + 6) = 0i64;
		*((_QWORD*)result + 22) = 0i64;
		result[32] = 0;
		*((_QWORD*)result + 26) = 0i64;
		*((_QWORD*)result + 45) = result;
		*((_QWORD*)result + 37) = 0i64;
		*((_QWORD*)result + 24) = 0i64;
		*((_QWORD*)result + 23) = 0i64;
		*((_QWORD*)result + 25) = sub_140058040;
		v3 = result + 92;
		*((_QWORD*)v2 + 26) = v3;
		*((_QWORD*)v2 + 27) = v3;
		*(_DWORD*)(*(_QWORD*)(v1 + 32) + 168i64) = 0;
		*((_QWORD*)v2 + 11) = 0i64;
		*((_QWORD*)v2 + 13) = 0i64;
		*((_QWORD*)v2 + 19) = 0i64;
		*((_BYTE*)v2 + 33) = 0;
		v2[9] = 0;
		*((_QWORD*)v2 + 7) = 0i64;
		*((_QWORD*)v2 + 8) = 0i64;
		*((_QWORD*)v2 + 9) = 0i64;
		*((_QWORD*)v2 + 10) = 0i64;
		*((_QWORD*)v2 + 15) = 616i64;
		v2[36] = 200;
		v2[37] = 200;
		*((_QWORD*)v2 + 17) = 0i64;
		*((_QWORD*)v2 + 5) = v1;
		*((_QWORD*)v2 + 6) = v2 + 10;
		*((_QWORD*)v2 + 28) = 0i64;
		*((_QWORD*)v2 + 29) = 0i64;
		*((_QWORD*)v2 + 30) = 0i64;
		*((_QWORD*)v2 + 31) = 0i64;
		*((_QWORD*)v2 + 32) = 0i64;
		*((_QWORD*)v2 + 33) = 0i64;
		*((_QWORD*)v2 + 34) = 0i64;
		*((_QWORD*)v2 + 35) = 0i64;
		*((_QWORD*)v2 + 36) = 0i64;
		if ((unsigned int)sub_1400610A0(v1, (void(__fastcall*)(__int64, __int64))sub_140059620, 0i64))
		{
			sub_1400596D0(v1);
			return 0i64;
		}
		return (int*)v1;
	}
	return result;
}

