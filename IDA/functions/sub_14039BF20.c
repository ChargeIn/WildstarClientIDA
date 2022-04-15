//----- (000000014039BF20) ----------------------------------------------------
__int64 __fastcall sub_14039BF20(__int64 a1, unsigned int a2, int a3)
{
	__int64 v4; // r14
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rax
	int v13; // esi
	BOOL v14; // r8d
	__int64 v15; // rcx
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rcx
	int v19; // eax
	unsigned int v21; // eax
	unsigned int v22; // edi
	int v23; // r8d
	int v24; // ecx
	__int64 v25; // [rsp+40h] [rbp-C0h] BYREF
	int v26; // [rsp+48h] [rbp-B8h]
	int v27; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v28; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * v29)(); // [rsp+60h] [rbp-A0h]
	__int64 v30; // [rsp+68h] [rbp-98h]
	int v31[52]; // [rsp+70h] [rbp-90h] BYREF
	int v32; // [rsp+180h] [rbp+80h] BYREF
	int v33; // [rsp+188h] [rbp+88h] BYREF
	__int64 v34; // [rsp+198h] [rbp+98h] BYREF

	v4 = a2;
	if ((dword_140DC21AC & 1) == 0)
	{
		dword_140DC21AC |= 1u;
		v6 = sub_140200220(0x3F4u);
		if (v6)
			v7 = *(_DWORD*)(v6 + 4);
		else
			v7 = 27712;
		dword_140C8A690[0] = v7;
		v8 = sub_140200220(0x3F4u);
		if (v8)
			v9 = *(_DWORD*)(v8 + 8);
		else
			v9 = 27713;
		dword_140C8A694 = v9;
		v10 = sub_140200220(0x3F4u);
		if (v10)
			v11 = *(_DWORD*)(v10 + 12);
		else
			v11 = 27714;
		dword_140C8A698 = v11;
	}
	v12 = *(_QWORD*)(a1 + 120);
	v13 = dword_140C8A690[v4];
	if (!v13)
		return 4i64;
	if (!v12)
		goto LABEL_21;
	v14 = *(_QWORD*)(qword_140C65898 + 120) == v12 || *(_QWORD*)(qword_140C65898 + 25744) == *(_QWORD*)(a1 + 120);
	v15 = 0i64;
	if (v14)
		v15 = qword_140C65898;
	if (!v15 || (v16 = sub_1405A5B90(v15, v13)) == 0)
		LABEL_21:
	v16 = sub_1407A0FD0(qword_140C65B70, v13);
	if (!v16)
		return 4i64;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
	{
		sub_1403A2550(a1);
		*(_DWORD*)(a1 + 26184) = 6;
		*(_DWORD*)(a1 + 26272) = v4;
		*(_DWORD*)(a1 + 26276) = a3;
		v27 = 0;
		v17 = sub_14001C280(a1);
		v18 = *(_QWORD*)(a1 + 25744);
		v28 = v17;
		v30 = 0i64;
		v29 = sub_14039EA90;
		v19 = sub_1404720D0(v18);
		sub_140195960(a1 + 26200, v19, (__int64)&v27, 4);
		return 2i64;
	}
	else
	{
		sub_1407E4830(v31, 0i64, 0xC8ui64);
		v31[7] = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
		v31[1] = v13;
		v31[22] = 1;
		v33 = 0;
		v34 = 0i64;
		v21 = sub_1403988D0(a1, (unsigned int)v31, v16, 0, (__int64)&v33, (__int64)&v34, (__int64)&v32);
		v22 = v21;
		if (!v21 || v21 == 317)
		{
			v25 = 0i64;
			v26 = 0;
			v24 = *(_DWORD*)(v34 + 96);
			BYTE4(v25) = v4;
			v26 = a3;
			LODWORD(v25) = v24;
			sub_1403F4900(a1, 0x99u, (__int64)&v25);
			return v22;
		}
		else
		{
			sub_1403B5250(v21);
			sub_1400035B0();
			if (v32 != v23)
			{
				*(_DWORD*)(a1 + 26184) = 6;
				*(_DWORD*)(a1 + 26272) = v4;
				*(_DWORD*)(a1 + 26276) = a3;
				sub_14039E400(a1);
			}
			return v22;
		}
	}
}
// 14039C154: variable 'v23' is possibly undefined
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C8A690: using guessed type int dword_140C8A690[];
// 140C8A694: using guessed type int dword_140C8A694;
// 140C8A698: using guessed type int dword_140C8A698;
// 140DC21AC: using guessed type int dword_140DC21AC;

