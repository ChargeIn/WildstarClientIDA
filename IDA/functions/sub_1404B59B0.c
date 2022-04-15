//----- (00000001404B59B0) ----------------------------------------------------
__int64 __fastcall sub_1404B59B0(int* a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // eax
	__int64 i; // rdi
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+30h] [rbp-18h]

	*a1 = a2;
	v7 = sub_1405B1510(&qword_140C7DFB0);
	v9 = v7;
	if (v7)
	{
		if (*(int*)(v7 + 496) >= 1 || v7 == qword_140C7DFE0)
			goto LABEL_9;
		v8 = xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
		LABEL_7:
			v10 = 0i64;
		}
		else
		{
			while (1)
			{
				v10 = *(_QWORD*)v8;
				if (*(_DWORD*)(*(_QWORD*)v8 + 48i64) == 5)
					break;
				v8 += 8i64;
				if (v8 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
					goto LABEL_7;
			}
		}
		if (v9 == v10)
		{
		LABEL_9:
			sub_1404CB310(v8, *(_DWORD*)(v9 + 188));
			v11 = *(_DWORD*)(v9 + 272);
			for (i = 0i64; (unsigned int)i < v11; i = (unsigned int)(i + 1))
			{
				v13 = *(_QWORD*)(v9 + 232);
				if (v13 && (unsigned int)i < v11)
					v14 = v13 + 192 * i;
				else
					v14 = 0i64;
				sub_1404C9A10(v14, *(_DWORD*)(v14 + 4), *(_DWORD*)(v9 + 188));
				v11 = *(_DWORD*)(v9 + 272);
			}
			sub_1405AE0B0(v9, *a1);
			v16 = 0i64;
			v17 = 0i64;
			v18 = 0i64;
			LODWORD(v18) = *a1;
			v16 = *(_QWORD*)(v9 + 8);
			v17 = *(_QWORD*)(v9 + 16);
			sub_1403F4900(qword_140C65898, 0x53Cu, (__int64)&v16);
		}
	}
	return sub_1400EA3E0(
		*(_QWORD*)(qword_140C65898 + 29504),
		"HousingEditModeChanged",
		byte_1409EC214,
		(unsigned int)*a1,
		a5,
		a6);
}
// 1404B5A28: variable 'v8' is possibly undefined
// 1409EC214: using guessed type _BYTE byte_1409EC214[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

