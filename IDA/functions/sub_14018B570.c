#include "../winhttp.h"

//----- (000000014018B570) ----------------------------------------------------
__int64 __fastcall sub_14018B570(unsigned __int64 a1)
{
	unsigned __int64 v1; // rbx
	unsigned __int64 v2; // rdi
	SIZE_T v3; // r15
	__int64* v4; // rbp
	__int64 v5; // rdx
	_QWORD* v6; // rsi
	_QWORD* v7; // r14
	LPVOID* v8; // rbx
	__int64 result; // rax

	v1 = a1;
	v2 = *(_BYTE*)(a1 + 7) & 0x7F;
	if (v2 >= 0x20)
	{
	LABEL_12:
		v8 = (LPVOID*)&qword_140C7F970[HIDWORD(*(_QWORD*)(v1 + 8)) & 0xFFF];
		VirtualFree(*v8, 0i64, 0x8000u);
		*v8 = 0i64;
		qword_140C87970 -= 0x100000000i64;
		result = dwSize;
		qword_140C87978 -= dwSize;
	}
	else
	{
		v3 = dwSize;
		v4 = &qword_140C87990[4 * (*(_BYTE*)(a1 + 7) & 0x7F)];
		while (1)
		{
			v5 = qword_140C7F970[HIDWORD(*(_QWORD*)(v1 + 8)) & 0xFFF];
			v6 = (_QWORD*)(v5 + ((1i64 << v2) ^ (v1 - v5)));
			if ((*v6 & 0x8000000000000000ui64) != 0 || (HIBYTE(*v6) & 0x7Fi64) != v2)
				break;
			sub_140189970(v4, (unsigned __int64*)(v5 + ((1i64 << v2) ^ (v1 - v5))));
			v7 = v6;
			if (v1 < (unsigned __int64)v6)
				v7 = (_QWORD*)v1;
			if (v1 < (unsigned __int64)v6)
				v1 = (unsigned __int64)v6;
			if ((v1 & qword_140C7F968) == 0)
			{
				VirtualFree((LPVOID)v1, v3, 0x4000u);
				v3 = dwSize;
				qword_140C87978 -= dwSize;
			}
			++v2;
			v4 += 4;
			v1 = (unsigned __int64)v7;
			if (v2 >= 0x20)
				goto LABEL_12;
		}
		*(_QWORD*)v1 &= 0xFFFFFFFFFFFFFFui64;
		*(_QWORD*)v1 |= (v2 & 0x7F) << 56;
		return sub_140189620((__int64)&qword_140C87990[4 * v2], v1);
	}
	return result;
}
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C87970: using guessed type __int64 qword_140C87970;
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87990: using guessed type __int64 qword_140C87990[38];

