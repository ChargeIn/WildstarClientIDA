#include "../winhttp.h"

//----- (00000001407E4974) ----------------------------------------------------
__int64 __fastcall sub_1407E4974(unsigned __int64 a1)
{
	__int64 v1; // r8
	unsigned int v2; // ebx
	char* v4; // r15
	char* v5; // r12
	char* v6; // r13
	CHAR* v7; // rbp
	LPVOID* v8; // r14
	CHAR* v9; // rcx
	int i; // eax
	BYTE* v11; // rcx
	int j; // edx
	__int64 v13; // rax
	BYTE* v14; // rcx
	int k; // edx
	__int64 v16; // rax
	volatile signed __int32* v17; // rcx
	volatile signed __int32* v19; // rax
	int MaxCharSize_low; // [rsp+50h] [rbp-68h]
	_DWORD* lpMem; // [rsp+58h] [rbp-60h]
	__int128 v22; // [rsp+60h] [rbp-58h] BYREF
	struct _cpinfo CPInfo; // [rsp+70h] [rbp-48h] BYREF

	v1 = *(_QWORD*)(a1 + 312);
	v2 = 0;
	lpMem = 0i64;
	v4 = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v22 = a1;
	if (v1)
	{
		v8 = (LPVOID*)(a1 + 4);
		if (!*(_DWORD*)(a1 + 4) && (unsigned int)sub_1407E1FD8(&v22, 0, v1, 0x1004u, v8))
			goto LABEL_36;
		lpMem = sub_1407E2C30(4ui64);
		v4 = (char*)sub_1407E2BB0(0x180ui64, 2ui64);
		v5 = (char*)sub_1407E2BB0(0x180ui64, 1ui64);
		v6 = (char*)sub_1407E2BB0(0x180ui64, 1ui64);
		v7 = (CHAR*)sub_1407E2BB0(0x101ui64, 1ui64);
		if (!lpMem)
			goto LABEL_36;
		if (!v4)
			goto LABEL_36;
		if (!v7)
			goto LABEL_36;
		if (!v5)
			goto LABEL_36;
		if (!v6)
			goto LABEL_36;
		*lpMem = 0;
		v9 = v7;
		for (i = 0; i < 256; *v9++ = i++)
			;
		if (!GetCPInfo(*(_DWORD*)v8, &CPInfo))
			goto LABEL_36;
		if (CPInfo.MaxCharSize > 5)
			goto LABEL_36;
		MaxCharSize_low = LOWORD(CPInfo.MaxCharSize);
		if (!(unsigned int)sub_1407F09F8(
			0i64,
			*(_QWORD*)(a1 + 312),
			0x100u,
			v7 + 1,
			255,
			(WCHAR*)(v5 + 129),
			255,
			*(_DWORD*)v8,
			0)
			|| !(unsigned int)sub_1407F09F8(
				0i64,
				*(_QWORD*)(a1 + 312),
				0x200u,
				v7 + 1,
				255,
				(WCHAR*)(v6 + 129),
				255,
				*(_DWORD*)v8,
				0))
		{
			goto LABEL_36;
		}
		if (MaxCharSize_low > 1 && CPInfo.LeadByte[0])
		{
			v11 = &CPInfo.LeadByte[1];
			do
			{
				if (!*v11)
					break;
				for (j = *(v11 - 1); j <= *v11; ++j)
				{
					v13 = j;
					v7[v13] = 32;
				}
				v11 += 2;
			} while (*(v11 - 1));
		}
		if ((unsigned int)sub_1407E82FC(0i64, 1u, v7, 256, (WORD*)v4 + 128, *(_DWORD*)v8, 0))
		{
			*((_WORD*)v4 + 127) = 0;
			v5[127] = 0;
			v6[127] = 0;
			v5[128] = 0;
			v6[128] = 0;
			if (MaxCharSize_low > 1 && CPInfo.LeadByte[0])
			{
				v14 = &CPInfo.LeadByte[1];
				do
				{
					if (!*v14)
						break;
					for (k = *(v14 - 1); k <= *v14; ++k)
					{
						v16 = k;
						*(_WORD*)&v4[2 * v16 + 256] = 0x8000;
					}
					v14 += 2;
				} while (*(v14 - 1));
			}
			sub_1407DB590((int*)v4, (int*)v4 + 128, 0xFEui64);
			sub_1407DB590((int*)v5, (int*)v5 + 64, 0x7Fui64);
			sub_1407DB590((int*)v6, (int*)v6 + 64, 0x7Fui64);
			v17 = *(volatile signed __int32**)(a1 + 248);
			if (v17)
			{
				if (!_InterlockedDecrement(v17))
				{
					sub_1407E14C0((LPVOID)(*(_QWORD*)(a1 + 256) - 254i64));
					sub_1407E14C0((LPVOID)(*(_QWORD*)(a1 + 272) - 128i64));
					sub_1407E14C0((LPVOID)(*(_QWORD*)(a1 + 280) - 128i64));
					sub_1407E14C0(*(LPVOID*)(a1 + 248));
				}
			}
			*lpMem = 1;
			*(_QWORD*)(a1 + 248) = lpMem;
			*(_QWORD*)(a1 + 264) = v4 + 256;
			*(_QWORD*)(a1 + 256) = v4 + 254;
			*(_QWORD*)(a1 + 272) = v5 + 128;
			*(_QWORD*)(a1 + 280) = v6 + 128;
			*(_DWORD*)(a1 + 212) = MaxCharSize_low;
		}
		else
		{
		LABEL_36:
			sub_1407E14C0(lpMem);
			sub_1407E14C0(v4);
			sub_1407E14C0(v5);
			sub_1407E14C0(v6);
			v2 = 1;
		}
		sub_1407E14C0(v7);
		return v2;
	}
	else
	{
		v19 = *(volatile signed __int32**)(a1 + 248);
		if (v19)
			_InterlockedDecrement(v19);
		*(_QWORD*)(a1 + 248) = 0i64;
		*(_QWORD*)(a1 + 264) = asc_14095EA40;
		*(_QWORD*)(a1 + 256) = 0i64;
		*(_QWORD*)(a1 + 272) = &unk_14095EED0;
		*(_DWORD*)(a1 + 212) = 1;
		*(_QWORD*)(a1 + 280) = &unk_14095F050;
		return 0i64;
	}
}
// 14095EA40: using guessed type wchar_t asc_14095EA40[33];

