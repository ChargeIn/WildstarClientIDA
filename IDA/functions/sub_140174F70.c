//----- (0000000140174F70) ----------------------------------------------------
__int64 __fastcall sub_140174F70(__int64 a1, __int64 a2)
{
	int v2; // esi
	int v3; // ebp
	int v4; // r14d
	int v5; // r15d
	int v8; // r9d
	bool v9; // zf
	_QWORD* v10; // rcx
	int v11; // eax
	_QWORD* v12; // rcx
	int v13; // eax
	_QWORD* v14; // rcx
	int v15; // eax
	int v17[2]; // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]
	int v19; // [rsp+2Ch] [rbp-1Ch]
	int v20; // [rsp+50h] [rbp+8h] BYREF
	int v21; // [rsp+54h] [rbp+Ch]

	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 720);
	v4 = *(_DWORD*)(a1 + 724);
	v5 = *(_DWORD*)(a1 + 728);
	if ((*(_BYTE*)(a1 + 664) & 8) != 0)
	{
		if (*(_BYTE*)(a1 + 1041))
		{
			v3 += sub_1400C3930((_QWORD**)(a1 + 1056), &v20)[1];
			v5 -= sub_1400C3930((_QWORD**)(a1 + 1472), &v20)[1];
		}
		else
		{
			v2 += *sub_1400C3930((_QWORD**)(a1 + 1056), &v20);
			v4 -= *sub_1400C3930((_QWORD**)(a1 + 1472), &v20);
		}
	}
	else
	{
		v8 = 0;
		v9 = *(_BYTE*)(a1 + 1041) == 0;
		v10 = *(_QWORD**)(a1 + 2304);
		if (v9)
		{
			if (v10)
			{
				sub_140101470(v10, &v20);
				v13 = v20;
			}
			else
			{
				v13 = 0;
			}
			v14 = *(_QWORD**)(a1 + 2352);
			v2 += v13;
			if (v14)
			{
				sub_140101470(v14, &v20);
				v8 = v20;
			}
			v4 -= v8;
		}
		else
		{
			if (v10)
			{
				sub_140101470(v10, &v20);
				v11 = v21;
			}
			else
			{
				v11 = 0;
			}
			v12 = *(_QWORD**)(a1 + 2352);
			v3 += v11;
			if (v12)
			{
				sub_140101470(v12, &v20);
				v8 = v21;
			}
			v5 -= v8;
		}
	}
	sub_140174CE0(a1, v17);
	if (v17[0] >= v18 || (v15 = v19, v17[1] >= v19))
	{
		*(_OWORD*)a2 = xmmword_140C784D0;
	}
	else
	{
		if (*(_BYTE*)(a1 + 1041))
		{
			*(_DWORD*)a2 = v2;
			*(_DWORD*)(a2 + 4) = v15;
		}
		else
		{
			*(_DWORD*)a2 = v18;
			*(_DWORD*)(a2 + 4) = v3;
		}
		*(_DWORD*)(a2 + 8) = v4;
		*(_DWORD*)(a2 + 12) = v5;
	}
	return a2;
}
// 14017505C: variable 'v8' is possibly undefined
// 140C784D0: using guessed type __int128 xmmword_140C784D0;

