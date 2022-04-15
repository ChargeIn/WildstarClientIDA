#include "../winhttp.h"

//----- (00000001407E3A94) ----------------------------------------------------
__int64 __fastcall sub_1407E3A94(int a1, __int64 a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	void(__fastcall * v8)(_QWORD); // r8
	__int64 v10; // rbp
	__int64 i; // rdx
	int v12; // edi

	v4 = sub_1407E3DB8();
	v5 = v4;
	if (!v4)
		return 0i64;
	v6 = v4[20];
	v7 = v6;
	do
	{
		if (*(_DWORD*)v7 == a1)
			break;
		v7 += 16i64;
	} while (v7 < v6 + 192);
	if (v7 >= v6 + 192 || *(_DWORD*)v7 != a1)
		v7 = 0i64;
	if (!v7)
		return 0i64;
	v8 = *(void(__fastcall**)(_QWORD))(v7 + 8);
	if (!v8)
		return 0i64;
	if (v8 == (void(__fastcall*)(_QWORD))5)
	{
		*(_QWORD*)(v7 + 8) = 0i64;
		return 1i64;
	}
	else
	{
		if (v8 != (void(__fastcall*)(_QWORD))1)
		{
			v10 = v4[21];
			v4[21] = a2;
			if (*(_DWORD*)(v7 + 4) == 8)
			{
				for (i = 48i64; i < 192; *(_QWORD*)(i + v4[20] - 8) = 0i64)
					i += 16i64;
				v12 = *((_DWORD*)v4 + 44);
				switch (*(_DWORD*)v7)
				{
				case 0xC000008E:
					*((_DWORD*)v4 + 44) = 131;
					break;
				case 0xC0000090:
					*((_DWORD*)v4 + 44) = 129;
					break;
				case 0xC0000091:
					*((_DWORD*)v4 + 44) = 132;
					break;
				case 0xC0000093:
					*((_DWORD*)v4 + 44) = 133;
					break;
				case 0xC000008D:
					*((_DWORD*)v4 + 44) = 130;
					break;
				case 0xC000008F:
					*((_DWORD*)v4 + 44) = 134;
					break;
				case 0xC0000092:
					*((_DWORD*)v4 + 44) = 138;
					break;
				case 0xC00002B5:
					*((_DWORD*)v4 + 44) = 141;
					break;
				case 0xC00002B4:
					*((_DWORD*)v4 + 44) = 142;
					break;
				}
				((void(__fastcall*)(__int64, _QWORD, void(__fastcall*)(_QWORD), _QWORD))v8)(
					8i64,
					*((unsigned int*)v4 + 44),
					v8,
					0i64);
				*((_DWORD*)v5 + 44) = v12;
			}
			else
			{
				*(_QWORD*)(v7 + 8) = 0i64;
				v8(*(unsigned int*)(v7 + 4));
			}
			v5[21] = v10;
		}
		return 0xFFFFFFFFi64;
	}
}

