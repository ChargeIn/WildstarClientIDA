//----- (00000001408500F0) ----------------------------------------------------
__int64 __fastcall sub_1408500F0(__int64 a1, char** a2, __int64 a3, char a4)
{
	char v6; // cl
	unsigned int v8; // r14d
	char* v9; // rax
	unsigned int v10; // ecx
	unsigned int v11; // r12d
	int v12; // edi
	char* v13; // rax
	unsigned int v14; // ecx
	int v15; // r15d
	char v16; // dl
	char v17; // bl
	unsigned int v19; // [rsp+20h] [rbp-48h]
	unsigned int v20; // [rsp+78h] [rbp+10h]
	char v21; // [rsp+88h] [rbp+20h]

	v6 = **a2;
	v8 = 1;
	++* a2;
	if (!a4)
	{
		*(_BYTE*)(a1 + 91) &= ~0x40u;
		*(_BYTE*)(a1 + 91) |= (v6 != 0) << 6;
	}
	v9 = *a2 + 1;
	v10 = (unsigned __int8)**a2;
	*a2 = v9;
	v11 = v10;
	if (!(_BYTE)v10)
		return 1i64;
	v12 = 0;
	v19 = (unsigned __int8)*v9;
	*a2 = v9 + 1;
	while (1)
	{
		v13 = *a2 + 1;
		v14 = (unsigned __int8)**a2;
		*a2 = v13;
		v13 += 4;
		v15 = *((_DWORD*)v13 - 1);
		*a2 = v13;
		v16 = *v13++;
		v21 = v16;
		v20 = v14;
		*a2 = v13;
		v17 = *v13;
		*a2 = v13 + 1;
		sub_140854180((_QWORD*)a1, v14, v17 != 0);
		if (!v17)
		{
			if (v15)
			{
				if (!a4)
				{
					v8 = sub_140854420((_QWORD*)a1, v20, v15, v21 != 0);
					if (v8 != 1)
						break;
				}
			}
		}
		if (++v12 >= v11)
		{
			if (a4)
				return v8;
			break;
		}
	}
	sub_140853680((_QWORD*)a1, v19, 0xFFFFFFFF);
	return v8;
}
// 140850169: conditional instruction was optimized away because ecx.4 is in (1..FF)

