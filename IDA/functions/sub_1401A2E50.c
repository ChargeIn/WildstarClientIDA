#include "../winhttp.h"

//----- (00000001401A2E50) ----------------------------------------------------
__int64 sub_1401A2E50(unsigned int a1, int a2, _QWORD* a3, ...)
{
	unsigned __int64 v6; // rbx
	int v7; // eax
	int v8; // eax
	__int64 v9; // rsi
	unsigned __int64 v10; // rdx
	char* v11; // rcx
	__int64 v12; // rdi
	char v13; // r9
	__int16 v14; // r8
	char v15; // r10
	char v16; // r8
	char v17; // r10
	unsigned __int64 v18; // rcx
	signed __int64 v19; // rcx
	void* v20; // rsp
	void* v21; // rsp
	char* v22; // rcx
	char v23; // r8
	__int16 v24; // dx
	char v25; // r9
	char v26; // dl
	char v27; // r9
	_WORD v29[2047]; // [rsp+20h] [rbp+0h] BYREF
	char v30; // [rsp+101Fh] [rbp+FFFh]
	va_list va; // [rsp+1088h] [rbp+1068h] BYREF

	va_start(va, a3);
	if (a2 < 0)
		return 0i64;
	v6 = -1i64;
	if (!dword_140C674A0)
	{
		OutputDebugStringA("WARNING! Log called before CRT startup");
	LABEL_4:
		v7 = -1;
		goto LABEL_5;
	}
	if (a1 > 0x82)
		goto LABEL_4;
	v7 = dword_140C674A8[a1];
LABEL_5:
	if (a2 > v7)
		return 0i64;
	v8 = sub_1407DF5FC(v29, 0xFFFui64, (signed __int8*)(*a3 - 19899968i64), (int*)va);
	if (v8 < 0 || (unsigned __int64)v8 >= 0xFFF)
		v30 = 0;
	v9 = 0i64;
	v10 = -1i64;
	v11 = (char*)v29;
	v12 = 0i64;
	do
	{
		v13 = *v11;
		if (*v11 < 0)
		{
			if (v10 > 1 && (v13 & 0xE0) == 0xC0 && (v15 = v11[1], (v15 & 0xC0) == 0x80))
			{
				v11 += 2;
				v14 = v15 & 0x3F | ((v13 & 0x1F) << 6);
				v10 -= 2i64;
			}
			else
			{
				if (v10 <= 2
					|| (v13 & 0xF0) != 0xE0
					|| (v16 = v11[1], (v16 & 0xC0) != 0x80)
					|| (v17 = v11[2], (v17 & 0xC0) != 0x80))
				{
					++v11;
					--v10;
					continue;
				}
				v11 += 3;
				v14 = v17 & 0x3F | (((unsigned __int16)(v13 << 6) | v16 & 0x3F) << 6);
				v10 -= 3i64;
			}
		}
		else
		{
			++v11;
			v14 = v13;
			--v10;
		}
		++v12;
		if (!v14)
			break;
	} while (v10);
	v18 = 2 * v12 + 15;
	if (v18 <= 2 * v12)
		v18 = 0xFFFFFFFFFFFFFF0i64;
	v19 = v18 & 0xFFFFFFFFFFFFFFF0ui64;
	v20 = alloca(v19);
	v21 = alloca(v19);
	v22 = (char*)v29;
	if (v29 || !v12)
	{
		do
		{
			v23 = *v22;
			if (*v22 < 0)
			{
				if (v6 > 1 && (v23 & 0xE0) == 0xC0 && (v25 = v22[1], (v25 & 0xC0) == 0x80))
				{
					v22 += 2;
					v24 = v25 & 0x3F | ((v23 & 0x1F) << 6);
					v6 -= 2i64;
				}
				else
				{
					if (v6 <= 2
						|| (v23 & 0xF0) != 0xE0
						|| (v26 = v22[1], (v26 & 0xC0) != 0x80)
						|| (v27 = v22[2], (v27 & 0xC0) != 0x80))
					{
						++v22;
						--v6;
						continue;
					}
					v22 += 3;
					v24 = v27 & 0x3F | (((unsigned __int16)(v23 << 6) | v26 & 0x3F) << 6);
					v6 -= 3i64;
				}
			}
			else
			{
				++v22;
				v24 = v23;
				--v6;
			}
			if (v12)
			{
				if (v9 == v12)
					break;
				v29[v9] = v24;
			}
			++v9;
			if (!v24)
				break;
		} while (v6);
	}
	sub_1401A2460((__int64)v22, a1, a2, (__int64)v29);
	return 1i64;
}
// 140C674A0: using guessed type int dword_140C674A0;
// 140C674A8: using guessed type _DWORD dword_140C674A8[77];

