#include "../winhttp.h"

//----- (00000001401BA2A0) ----------------------------------------------------
signed int __fastcall sub_1401BA2A0(__int64 a1, _QWORD* a2, unsigned __int64 a3)
{
	__int64 v5; // r12
	signed int result; // eax
	int v7; // ebx
	unsigned __int64 v8; // r15
	LARGE_INTEGER v9; // rsi
	int* v10; // rax
	__int64 v11; // rbp
	unsigned __int64 v12; // rdi
	signed int v13; // r12d
	__int64 v14; // rdx
	unsigned __int64* v15; // rdi
	char v16; // al
	char v17; // cl
	unsigned int v18; // eax
	struct _FILETIME LastWriteTime; // [rsp+28h] [rbp-D0h] BYREF
	int v21[5]; // [rsp+30h] [rbp-C8h] BYREF
	__int64 v22; // [rsp+44h] [rbp-B4h]
	__int16 v23; // [rsp+4Ch] [rbp-ACh]
	char v24[64]; // [rsp+4Eh] [rbp-AAh] BYREF
	__int64 v25; // [rsp+90h] [rbp-68h]
	unsigned __int64 v26[3]; // [rsp+A0h] [rbp-58h] BYREF

	v5 = a1;
	if (!a2)
		return 0;
	if (a2[2] != a3)
		return -1610416125;
	if (GetFileTime(*(HANDLE*)(a1 + 32), 0i64, 0i64, &LastWriteTime))
	{
		if (abs64(*a2 - *(_QWORD*)&LastWriteTime) <= 0x1312D00)
		{
			v7 = 0;
			v8 = 0x100000i64;
			v9.QuadPart = 0i64;
			if (a3 < 0x100000)
				v8 = a3;
			if (v8)
			{
				v10 = sub_14018B280(v8 + 16, 0);
				if (v10)
				{
					v11 = (__int64)(v10 + 4);
					*(_QWORD*)v10 = &off_140B5F110;
				}
				else
				{
					v11 = 16i64;
				}
			}
			else
			{
				v11 = 0i64;
			}
			v22 = 0i64;
			v23 = 0;
			v21[0] = 1732584193;
			v21[1] = -271733879;
			v21[2] = -1732584194;
			v21[3] = 271733878;
			v21[4] = -1009589776;
			v25 = 0i64;
			if (!a3)
				goto LABEL_26;
			do
			{
				v12 = v8;
				if (a3 - v9.QuadPart < v8)
					v12 = a3 - v9.QuadPart;
				if (v12)
				{
					v13 = sub_1401BC1A0(v5, v9, (int*)v11, v12);
					if (v13 < 0)
					{
						if (v11)
							(**(void(__fastcall***)(__int64))(v11 - 16))(v11 - 16);
						return v13;
					}
					sub_1401C8C20((__int64)v21, (_BYTE*)v11, v12);
					v5 = a1;
				}
				v9.QuadPart += v12;
			} while (v9.QuadPart < a3);
			if (HIDWORD(v25))
				goto LABEL_29;
			if (!(_DWORD)v25)
			{
			LABEL_26:
				sub_1401C8F20((__int64)v21);
				memset(v24, 0, sizeof(v24));
				v22 = 0i64;
				LODWORD(v25) = 1;
			}
			v14 = 0i64;
			v15 = v26;
			do
			{
				v16 = v7++;
				v15 = (unsigned __int64*)((char*)v15 + 1);
				v17 = 3 - (v16 & 3);
				v18 = v21[v14 >> 2];
				v14 = v7;
				*((_BYTE*)v15 - 1) = v18 >> (8 * v17);
			} while ((unsigned __int64)v7 < 0x14);
		LABEL_29:
			if (v11)
				(**(void(__fastcall***)(__int64))(v11 - 16))(v11 - 16);
			return (unsigned int)sub_1407E6AF0(v26, (__int64)(a2 + 3), 0x14ui64) != 0 ? 0xA0030002 : 0;
		}
		else
		{
			return -1610416121;
		}
	}
	else
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 1401BA2A0: using guessed type unsigned __int64 var_58[3];

