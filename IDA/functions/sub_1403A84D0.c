//----- (00000001403A84D0) ----------------------------------------------------
void __fastcall sub_1403A84D0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // eax
	int v4; // edx
	int v5; // eax
	int v6; // r8d
	BOOL v7; // r9d
	bool v8; // zf
	int v9; // edx
	int v10; // ecx
	unsigned int v11; // edx
	int v12; // eax
	__int64 v13; // r9
	char v14; // cl
	char v15; // al
	unsigned int v16; // eax
	int v17; // ebx
	int v18; // [rsp+20h] [rbp-28h] BYREF
	__int64 v19; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v20)(); // [rsp+30h] [rbp-18h]
	__int64 v21; // [rsp+38h] [rbp-10h]
	__int16 v22; // [rsp+50h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 25480) || *(_DWORD*)(a1 + 25500) >= *(_DWORD*)(a1 + 25504))
		return;
	v8 = *(_DWORD*)(a1 + 30196) == 0;
	*(_BYTE*)(a1 + 25510) = *(_BYTE*)(a1 + 25509);
	*(_BYTE*)(a1 + 25509) = 0;
	if (!v8)
		*(_BYTE*)(a1 + 25509) = 1;
	if (*(_DWORD*)(a1 + 30200))
		*(_BYTE*)(a1 + 25509) |= 2u;
	if (*(_DWORD*)(a1 + 30204))
		*(_BYTE*)(a1 + 25509) |= 4u;
	if (*(_DWORD*)(a1 + 30208))
		*(_BYTE*)(a1 + 25509) |= 8u;
	if ((dword_140DC2224 & 1) == 0)
	{
		dword_140DC2224 |= 1u;
		v2 = sub_140200220(0x454u);
		if (v2)
			v3 = *(_DWORD*)(v2 + 4);
		else
			v3 = 100;
		dword_140DC2228 = v3;
	}
	v4 = *(_DWORD*)(a1 + 25480);
	v5 = *(unsigned __int8*)(a1 + 25508);
	v6 = *(unsigned __int8*)(a1 + 25509);
	v7 = (v6 & v4) != 0;
	v8 = (v5 & v4) == 0;
	v9 = ~v4;
	if ((v9 & v5) != 0 || (v9 & v6) > 0)
		goto LABEL_20;
	if ((_BYTE)v6)
	{
		if (v8 && !v7)
			goto LABEL_24;
	}
	else if (v8)
	{
	LABEL_20:
		++* (_DWORD*)(a1 + 25496);
		v10 = *(_DWORD*)(a1 + 25488);
		v11 = *(_DWORD*)(a1 + 25496);
		if (v11 >= v10)
			return;
		v12 = (int)(float)((float)*(int*)(a1 + 25492) / (float)((float)v10 / (float)(int)(v10 - v11)));
		*(_DWORD*)(a1 + 25504) = v12;
		if (!v12)
			return;
		v13 = 0i64;
		goto LABEL_23;
	}
	++* (_DWORD*)(a1 + 25500);
	v13 = 1i64;
LABEL_23:
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "StunVGPressed", byte_1409E9C8C, v13);
LABEL_24:
	sub_1400EA3E0(
		*(_QWORD*)(a1 + 29504),
		"UpdateCCStateStun",
		byte_1409E9C9C,
		(float)((float)*(int*)(a1 + 25500) / (float)*(int*)(a1 + 25504)));
	v14 = *(_BYTE*)(a1 + 25509);
	if (*(_BYTE*)(a1 + 25510) != v14 || *(_BYTE*)(a1 + 25508))
	{
		v22 = 0;
		v15 = *(_BYTE*)(a1 + 25508);
		HIBYTE(v22) = v14;
		LOBYTE(v22) = v15;
		sub_1403F4900(a1, 0xC3u, (__int64)&v22);
	}
	v16 = *(_DWORD*)(a1 + 25504);
	*(_BYTE*)(a1 + 25508) = 0;
	if (*(_DWORD*)(a1 + 25500) < v16)
	{
		v18 = 0;
		v17 = *(_DWORD*)(a1 + 25512) + 2 * dword_140DC2228 - dword_140C636A8;
		v19 = sub_14001C280(a1);
		v21 = 0i64;
		v20 = sub_1403A84D0;
		sub_140195960(a1 + 25520, v17, (__int64)&v18, 4);
		*(_DWORD*)(a1 + 25512) = dword_140C636A8;
	}
}
// 1409E9C8C: using guessed type _BYTE byte_1409E9C8C[16];
// 1409E9C9C: using guessed type _BYTE byte_1409E9C9C[40];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2224: using guessed type int dword_140DC2224;
// 140DC2228: using guessed type int dword_140DC2228;

