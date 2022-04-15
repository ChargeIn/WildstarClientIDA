//----- (000000014085C240) ----------------------------------------------------
__int64 __fastcall sub_14085C240(_QWORD* a1, __int64 a2, int a3)
{
	unsigned int v4; // eax
	__int64 v5; // rdi
	unsigned int v6; // esi
	__int64 result; // rax
	int* v8; // r8
	int v9; // ecx
	unsigned int v10; // edi
	int v11; // xmm0_4
	int* v12; // r8
	unsigned int v13; // r13d
	int v14; // edx
	int* v15; // r8
	int v16; // xmm6_4
	int v17; // esi
	int v18; // r14d
	unsigned __int8 v19; // r15
	unsigned __int8 v20; // r12
	_DWORD* v21; // rax
	int* v22; // [rsp+78h] [rbp+30h] BYREF
	int v23; // [rsp+80h] [rbp+38h] BYREF

	v23 = a3;
	v22 = (int*)(a2 + 4);
	v4 = *(_DWORD*)(a2 + 4);
	v22 = (int*)(a2 + 8);
	if (v4)
	{
		v5 = sub_140830F00(qword_140C61BA8, v4, 1);
		if (!v5)
			return 2i64;
		(*(void(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v5 + 72i64))(v5, a1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		if (v6 != 1)
			return v6;
	}
	result = (*(__int64(__fastcall**)(_QWORD*, int**, int*))(*a1 + 568i64))(a1, &v22, &v23);
	if ((_DWORD)result == 1)
	{
		v8 = v22;
		v9 = *v22++;
		v8 += 2;
		v10 = 0;
		*((_DWORD*)a1 + 40) = v9 * (dword_140C110B4 / 0x3E8u);
		v11 = *(v8 - 1);
		v22 = v8;
		v12 = v8 + 1;
		*((_DWORD*)a1 + 42) = v11;
		v13 = *(v12 - 1);
		v22 = v12;
		if (v13)
		{
			while (1)
			{
				v14 = *v12;
				v22 = v12 + 1;
				v15 = v12 + 2;
				v16 = *(v15 - 1);
				v22 = v15;
				v17 = *v15;
				v22 = v15 + 1;
				v15 += 2;
				v18 = *(v15 - 1);
				v22 = v15;
				v19 = *(_BYTE*)v15;
				v22 = (int*)((char*)v15 + 1);
				v15 = (int*)((char*)v15 + 2);
				v20 = *((_BYTE*)v15 - 1);
				v22 = v15;
				v21 = sub_14085BC80((__int64**)a1 + 22, v14);
				if (!v21)
					return 2i64;
				++v10;
				*v21 = v16;
				v21[3] = v19;
				v21[2] = v18;
				v21[1] = v17;
				v21[4] = v20;
				if (v10 >= v13)
					goto LABEL_12;
				v12 = v22;
			}
		}
		else
		{
		LABEL_12:
			result = (*(__int64(__fastcall**)(_QWORD*, int**, int*, _QWORD))(*a1 + 576i64))(a1, &v22, &v23, 0i64);
			if ((_DWORD)result == 1)
			{
				result = sub_140854560(a1, (unsigned int**)&v22, &v23);
				if ((_DWORD)result == 1)
				{
					result = sub_140853C70(a1, &v22);
					if ((_DWORD)result == 1)
						return sub_140853B70(a1, (unsigned int**)&v22);
				}
			}
		}
	}
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;

