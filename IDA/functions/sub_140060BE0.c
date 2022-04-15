#include "../winhttp.h"

//----- (0000000140060BE0) ----------------------------------------------------
__int64 __fastcall sub_140060BE0(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rsi
	__int64* v3; // rbx
	__int64 result; // rax
	unsigned __int64 v6; // r8
	char v7; // cl
	__int64 v8; // rcx

	v2 = *(_QWORD*)(a1 + 32);
	v3 = (__int64*)(a1 + 152);
	if (*(_QWORD*)(a1 + 152))
	{
		do
		{
			result = *v3;
			v6 = *(_QWORD*)(*v3 + 16);
			if (v6 < a2)
				break;
			if (v6 == a2)
			{
				if ((*(_BYTE*)(result + 9) & 3 & (unsigned __int8)~*(_BYTE*)(v2 + 32)) != 0)
					*(_BYTE*)(result + 9) ^= 3u;
				return result;
			}
			v3 = (__int64*)*v3;
		} while (*(_QWORD*)result);
	}
	result = sub_140064780(a1, 0i64, 0i64, 40i64);
	*(_BYTE*)(result + 8) = 10;
	v7 = *(_BYTE*)(v2 + 32);
	*(_QWORD*)(result + 16) = a2;
	*(_BYTE*)(result + 9) = v7 & 3;
	*(_QWORD*)result = *v3;
	*v3 = result;
	*(_QWORD*)(result + 24) = v2 + 184;
	v8 = *(_QWORD*)(v2 + 216);
	*(_QWORD*)(result + 32) = v8;
	*(_QWORD*)(v8 + 24) = result;
	*(_QWORD*)(v2 + 216) = result;
	return result;
}

