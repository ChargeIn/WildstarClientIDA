//----- (0000000140860880) ----------------------------------------------------
__int64 __fastcall sub_140860880(__int64* a1, __int64* a2)
{
	__int64 v3; // rbx
	__int64* v4; // rdx
	int v5; // xmm0_4
	__int64(__fastcall * **v6)(_QWORD, __int64, __int64, __int64); // r14
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // rdi
	__int64 result; // rax
	__int64 v11; // r8
	__int64 v12; // r9
	__int64* v13; // rdx
	__int64* v14; // [rsp+40h] [rbp-38h] BYREF
	__int64 v15; // [rsp+48h] [rbp-30h]
	int v16; // [rsp+50h] [rbp-28h]
	int v17; // [rsp+54h] [rbp-24h]
	__int64 v18; // [rsp+58h] [rbp-20h]
	__int16 v19; // [rsp+60h] [rbp-18h]

	++* ((_DWORD*)a1 + 101);
	if (*(_DWORD*)a2)
	{
		v3 = *a2;
		v4 = (__int64*)a1[17];
		if (v4)
		{
			return sub_14083AB80(qword_140C61B70, v4, 0x4000000i64, 0.0, v3, SHIDWORD(v3), 0);
		}
		else
		{
			v5 = *((_DWORD*)a1 + 75);
			v15 = 0x4000000i64;
			v18 = v3;
			v16 = v5;
			v6 = (__int64(__fastcall***)(_QWORD, __int64, __int64, __int64))(a1 + 2);
			v17 = 0;
			v14 = a1 + 2;
			v19 = 256;
			v7 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v14, 1, 0);
			v8 = *a1;
			*((_BYTE*)a1 + 144) |= 2u;
			v9 = v7;
			a1[17] = v7;
			result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(v8 + 128))(a1, 14i64, (unsigned int)v3);
			if (!v9)
			{
				LOBYTE(v12) = 1;
				return (**v6)(v6, v15, v11, v12);
			}
		}
	}
	else if ((*((_BYTE*)a1 + 378) & 0x78) != 0)
	{
		v13 = (__int64*)a1[17];
		if (v13)
			return sub_14083AB80(qword_140C61B70, v13, 0x4000000i64, 0.0, 0, 4, 0);
		else
			return (*(__int64(__fastcall**)(__int64*, __int64))(*a1 + 40))(a1, 1i64);
	}
	else
	{
		return (*(__int64(__fastcall**)(__int64*, _QWORD))(*a1 + 40))(a1, 0i64);
	}
	return result;
}
// 140860955: variable 'v11' is possibly undefined
// 140860955: variable 'v12' is possibly undefined
// 140C61B70: using guessed type __int64 qword_140C61B70;

