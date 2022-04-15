#include "../winhttp.h"

//----- (000000014086D8F0) ----------------------------------------------------
__int64 __fastcall sub_14086D8F0(__int64 a1, __int64 a2, _BYTE* a3, __int64 a4)
{
	__int64 v4; // r15
	unsigned __int16 v5; // bp
	int v6; // r14d
	char v9; // al
	bool v10; // zf
	unsigned int v12; // eax
	unsigned __int16* v13; // rdi
	int v14; // eax
	int v15; // edi
	int v16; // edi
	unsigned __int16 v17; // bp
	unsigned __int16 v18; // di
	__int16 v19; // ax
	__int64 v20; // rdx
	unsigned __int16 v21; // ax
	unsigned __int16* v22; // rdi
	unsigned __int16 v23; // r12
	unsigned __int16* v24; // rsi
	unsigned __int64 i; // rcx

	*a3 = 1;
	v4 = *(_QWORD*)(a1 + 192);
	v5 = 0;
	v6 = -1;
	if (!*(_WORD*)(a2 + 34))
	{
		if (a4)
		{
			v9 = *(_BYTE*)(a4 + 2);
			if ((v9 & 1) == 0 || (v9 & 2) == 0 && (v10 = *(_WORD*)a4 == 1, -- * (_WORD*)a4, v10))
			{
				*a3 = 0;
				return 0i64;
			}
		}
		*(_WORD*)(a2 + 34) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
		v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
		sub_14087C360(a2, v12);
		if ((*(_BYTE*)(a1 + 478) & 0x30) == 16)
		{
			v13 = *(unsigned __int16**)(a2 + 40);
			for (*(_DWORD*)(a2 + 28) = *(_DWORD*)(a2 + 24); v13 != *(unsigned __int16**)(a2 + 48); *(_DWORD*)(a2 + 28) -= v14)
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 80i64))(v4, *v13++);
		}
		*(_WORD*)(a2 + 32) -= (__int64)(unsigned int)(*(_DWORD*)(a2 + 48) - *(_DWORD*)(a2 + 40)) >> 1;
	}
	if ((*(_BYTE*)(a1 + 479) & 8) == 0)
	{
		v16 = (unsigned __int16)((int)sub_1407DDB28() % *(unsigned __int16*)(a2 + 32));
		while (1)
		{
			if ((*(_BYTE*)(a1 + 478) & 0x30) != 0)
			{
				if (sub_14087C2D0(a2, v5) || sub_14087C2A0(a2, v5))
					goto LABEL_30;
			}
			else if (*(_WORD*)(a1 + 476) && sub_14087C2A0(a2, v5))
			{
				goto LABEL_30;
			}
			++v6;
		LABEL_30:
			++v5;
			if (v6 >= v16)
				goto LABEL_31;
		}
	}
	v15 = sub_14087C1B0(a2);
	if (v15 > -1)
	{
		do
		{
			if ((*(_BYTE*)(a1 + 478) & 0x30) != 0)
			{
				if (sub_14087C2D0(a2, v5) || sub_14087C2A0(a2, v5))
					goto LABEL_20;
			}
			else if (*(_WORD*)(a1 + 476) && sub_14087C2A0(a2, v5))
			{
				goto LABEL_20;
			}
			v6 += (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 80i64))(v4, v5);
		LABEL_20:
			++v5;
		} while (v6 < v15);
	}
LABEL_31:
	v17 = v5 - 1;
	if ((*(_BYTE*)(a1 + 478) & 0x30) != 0)
	{
		v18 = *(_WORD*)(a1 + 476);
		if (!v18)
			v18 = 1;
		*(_DWORD*)(a2 + 28) -= (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 80i64))(v4, v17);
		--* (_WORD*)(a2 + 32);
		--* (_WORD*)(a2 + 34);
		sub_14087C180(a2, v17);
		if (sub_14086C450(a2 + 40, v17))
		{
			sub_14087C120(a2, v17);
			v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
			v20 = *(_QWORD*)(a2 + 48);
			v21 = v19 - 1;
			if (v18 < v21)
				v21 = v18;
			if ((unsigned int)((v20 - *(_QWORD*)(a2 + 40)) >> 1) > v21)
			{
				v22 = *(unsigned __int16**)(a2 + 40);
				v23 = *v22;
				if ((unsigned __int64)v22 < v20 - 2)
				{
					v24 = v22 + 1;
					for (i = ((unsigned __int64)(v20 - 2 - (_QWORD)v22 - 1) >> 1) + 1; i; --i)
						*v22++ = *v24++;
				}
				*(_QWORD*)(a2 + 48) -= 2i64;
				sub_14087C150(a2, v23);
				if (!sub_14087C2D0(a2, v23))
				{
					*(_DWORD*)(a2 + 28) += (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 80i64))(v4, v23);
					++* (_WORD*)(a2 + 32);
				}
			}
		}
		else
		{
			*(_WORD*)(a2 + 34) = 0;
		}
	}
	else
	{
		if (!sub_14087C2D0(a2, v17))
		{
			sub_14087C180(a2, v17);
			--* (_WORD*)(a2 + 34);
		}
		sub_14086E1E0(a1, a2, v17);
	}
	return v17;
}
// 14086DA4F: conditional instruction was optimized away because edi.4<10000u

