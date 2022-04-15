//----- (00000001400BA340) ----------------------------------------------------
__int64 __fastcall sub_1400BA340(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rbp
	__int64 v7; // rbx
	__int64 v8; // rsi
	int v9; // ebx
	_QWORD* v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rdi
	__int64 v13; // rax
	_DWORD* v14; // rdx
	int v15; // r9d
	__int64 v16; // r8
	int v17; // r9d
	__int64 v18; // r8
	__int64 v19; // r8
	int v20; // eax
	int v21; // xmm0_4
	__int64 v22; // r8
	int v23; // xmm0_4
	__int64 v24; // r8
	int v25; // r8d
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64 v28; // rdx
	__int64 v29; // rdx
	__int64 v30; // rdx
	__int64 v31; // rdx
	__int64 v32; // rdx
	__int64 v33; // rdx
	__int64 v34; // rdx
	__int64 v35; // rdx
	__int64 v36; // rdx
	__int64 v37; // rdx
	__int64 v38; // rdx
	__int64 v39; // rdx
	float v40; // xmm1_4
	float v41; // xmm0_4
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-58h] BYREF
	__int64 v43; // [rsp+38h] [rbp-50h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-48h]
	__int64 v45[4]; // [rsp+50h] [rbp-38h] BYREF
	__int64 v46; // [rsp+90h] [rbp+8h] BYREF
	unsigned int v47; // [rsp+98h] [rbp+10h]
	_QWORD* v48; // [rsp+A0h] [rbp+18h]

	v48 = (_QWORD*)a3;
	v47 = a2;
	v46 = a1;
	v4 = a2;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 176))
		return a4;
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2);
	if (!v7)
		return a4;
	if (*(__int64*)v7 < 0)
		return *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2);
	v8 = sub_140236140(a2);
	if (!v8)
		return a4;
	if ((*(_QWORD*)v7 & 0x4000000000000000i64) != 0)
	{
		v43 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v45[0] = (__int64)TlsValue;
		v45[1] = v43;
		v45[2] = (__int64)lpTlsValue;
		v46 = 0x141D0E480i64;
		v9 = sub_1401971E0(dword_140C8A058, 19, &v46, v47, v45);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v9)
			DebugBreak();
		return a4;
	}
	v10 = v48;
	*(_QWORD*)v7 |= 0x4000000000000000ui64;
	v11 = *(unsigned int*)(v8 + 4);
	if ((int)v11 <= 0)
		v11 = *(unsigned int*)(*v10 + 4 * v4);
	v12 = sub_1400BA340(v46, v11, v10, a4);
	v13 = sub_140234380(*(_DWORD*)(v8 + 20));
	v14 = (_DWORD*)v13;
	if (v13)
		v15 = *(_DWORD*)(v13 + 4);
	else
		v15 = 0;
	v16 = *(_QWORD*)v12;
	if ((*(_DWORD*)(v8 + 12) & 3) != 0)
	{
		if ((*(_DWORD*)(v8 + 12) & 3) == 2)
		{
			*(_DWORD*)(v7 + 12) = 0;
			*(_QWORD*)v7 &= ~1ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 12) = v15;
			*(_QWORD*)v7 |= 1ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 12) = *(_DWORD*)(v12 + 12);
		*(_QWORD*)v7 |= v16 & 1;
	}
	if (v13)
		v17 = *(_DWORD*)(v13 + 8);
	else
		v17 = 0;
	v18 = *(_QWORD*)v12;
	if ((*(_DWORD*)(v8 + 12) & 3) != 0)
	{
		if ((*(_DWORD*)(v8 + 12) & 3) == 2)
		{
			*(_DWORD*)(v7 + 16) = 0;
			*(_QWORD*)v7 &= ~1ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 16) = v17;
			*(_QWORD*)v7 |= 1ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 16) = *(_DWORD*)(v12 + 16);
		*(_QWORD*)v7 |= v18 & 1;
	}
	v19 = *(_QWORD*)v12;
	v20 = *(_DWORD*)(v8 + 12) & 3;
	if (v20)
	{
		*(_DWORD*)(v7 + 20) = 0;
		if (v20 == 2)
			*(_QWORD*)v7 &= ~1ui64;
		else
			*(_QWORD*)v7 |= 1ui64;
	}
	else
	{
		*(_DWORD*)(v7 + 20) = *(_DWORD*)(v12 + 20);
		*(_QWORD*)v7 |= v19 & 1;
	}
	if (v14)
		v21 = v14[3];
	else
		v21 = 0;
	v22 = *(_QWORD*)v12;
	if ((*(_DWORD*)(v8 + 12) & 3) != 0)
	{
		if ((*(_DWORD*)(v8 + 12) & 3) == 2)
		{
			*(_DWORD*)(v7 + 24) = 0;
			*(_QWORD*)v7 &= ~1ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 24) = v21;
			*(_QWORD*)v7 |= 1ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 24) = *(_DWORD*)(v12 + 24);
		*(_QWORD*)v7 |= v22 & 1;
	}
	if (v14)
		v23 = v14[4];
	else
		v23 = 0;
	v24 = *(_QWORD*)v12;
	if ((*(_DWORD*)(v8 + 12) & 3) != 0)
	{
		if ((*(_DWORD*)(v8 + 12) & 3) == 2)
		{
			*(_DWORD*)(v7 + 28) = 0;
			*(_QWORD*)v7 &= ~1ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 28) = v23;
			*(_QWORD*)v7 |= 1ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 28) = *(_DWORD*)(v12 + 28);
		*(_QWORD*)v7 |= v24 & 1;
	}
	if (v14)
		v25 = v14[5];
	else
		v25 = 0;
	v26 = *(_QWORD*)v12;
	if ((*(_DWORD*)(v8 + 12) & 3) != 0)
	{
		if ((*(_DWORD*)(v8 + 12) & 3) == 2)
		{
			*(_DWORD*)(v7 + 32) = 0;
			*(_QWORD*)v7 &= ~1ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 32) = v25;
			*(_QWORD*)v7 |= 1ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 32) = *(_DWORD*)(v12 + 32);
		*(_QWORD*)v7 |= v26 & 1;
	}
	v27 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 2) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 2) & 3) == 2)
		{
			*(_DWORD*)(v7 + 36) = 0;
			*(_QWORD*)v7 &= ~4ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 36) = *(_DWORD*)(v8 + 24);
			*(_QWORD*)v7 |= 4ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 36) = *(_DWORD*)(v12 + 36);
		*(_QWORD*)v7 |= v27 & 4;
	}
	v28 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 4) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 4) & 3) == 2)
		{
			*(_DWORD*)(v7 + 40) = 0;
			*(_QWORD*)v7 &= ~0x10ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 40) = *(_DWORD*)(v8 + 28);
			*(_QWORD*)v7 |= 0x10ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 40) = *(_DWORD*)(v12 + 40);
		*(_QWORD*)v7 |= v28 & 0x10;
	}
	v29 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 6) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 6) & 3) == 2)
		{
			*(_DWORD*)(v7 + 44) = 0;
			*(_QWORD*)v7 &= ~0x40ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 44) = *(_DWORD*)(v8 + 32);
			*(_QWORD*)v7 |= 0x40ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 44) = *(_DWORD*)(v12 + 44);
		*(_QWORD*)v7 |= v29 & 0x40;
	}
	v30 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 8) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 8) & 3) == 2)
		{
			*(_DWORD*)(v7 + 48) = 0;
			*(_QWORD*)v7 &= ~0x100ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 48) = *(_DWORD*)(v8 + 36);
			*(_QWORD*)v7 |= 0x100ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 48) = *(_DWORD*)(v12 + 48);
		*(_QWORD*)v7 |= v30 & 0x100;
	}
	v31 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 10) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 10) & 3) == 2)
		{
			*(_DWORD*)(v7 + 52) = 0;
			*(_QWORD*)v7 &= ~0x400ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 52) = *(_DWORD*)(v8 + 40);
			*(_QWORD*)v7 |= 0x400ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 52) = *(_DWORD*)(v12 + 52);
		*(_QWORD*)v7 |= v31 & 0x400;
	}
	v32 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 22) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 22) & 3) == 2)
		{
			*(_DWORD*)(v7 + 56) = 0;
			*(_QWORD*)v7 &= ~0x400000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 56) = *(_DWORD*)(v8 + 44);
			*(_QWORD*)v7 |= 0x400000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 56) = *(_DWORD*)(v12 + 56);
		*(_QWORD*)v7 |= v32 & 0x400000;
	}
	v33 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 12) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 12) & 3) == 2)
		{
			*(_DWORD*)(v7 + 60) = 0;
			*(_QWORD*)v7 &= ~0x1000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 60) = *(_DWORD*)(v8 + 48);
			*(_QWORD*)v7 |= 0x1000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 60) = *(_DWORD*)(v12 + 60);
		*(_QWORD*)v7 |= v33 & 0x1000;
	}
	v34 = *(_QWORD*)v12;
	if ((unsigned __int8)HIBYTE(*(_WORD*)(v8 + 12)) >> 6)
	{
		if ((unsigned __int8)HIBYTE(*(_WORD*)(v8 + 12)) >> 6 == 2)
		{
			*(_DWORD*)(v7 + 64) = 0;
			*(_QWORD*)v7 &= ~0x4000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 64) = *(_DWORD*)(v8 + 52);
			*(_QWORD*)v7 |= 0x4000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 64) = *(_DWORD*)(v12 + 64);
		*(_QWORD*)v7 |= v34 & 0x4000;
	}
	v35 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 18) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 18) & 3) == 2)
		{
			*(_DWORD*)(v7 + 68) = 0;
			*(_QWORD*)v7 &= ~0x40000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 68) = *(_DWORD*)(v8 + 56);
			*(_QWORD*)v7 |= 0x40000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 68) = *(_DWORD*)(v12 + 68);
		*(_QWORD*)v7 |= v35 & 0x40000;
	}
	v36 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 20) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 20) & 3) == 2)
		{
			*(_DWORD*)(v7 + 72) = 0;
			*(_QWORD*)v7 &= ~0x100000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 72) = *(_DWORD*)(v8 + 60);
			*(_QWORD*)v7 |= 0x100000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 72) = *(_DWORD*)(v12 + 72);
		*(_QWORD*)v7 |= v36 & 0x100000;
	}
	v37 = *(_QWORD*)v12;
	if ((*(_WORD*)(v8 + 14) & 3) != 0)
	{
		if ((*(_WORD*)(v8 + 14) & 3) == 2)
		{
			*(_DWORD*)(v7 + 76) = 0;
			*(_QWORD*)v7 &= ~0x10000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 76) = *(_DWORD*)(v8 + 64);
			*(_QWORD*)v7 |= 0x10000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 76) = *(_DWORD*)(v12 + 76);
		*(_QWORD*)v7 |= v37 & 0x10000;
	}
	v38 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 18) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 18) & 3) == 2)
		{
			*(_DWORD*)(v7 + 80) = 0;
			*(_QWORD*)v7 &= ~0x40000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 80) = *(_DWORD*)(v8 + 68);
			*(_QWORD*)v7 |= 0x40000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 80) = *(_DWORD*)(v12 + 80);
		*(_QWORD*)v7 |= v38 & 0x40000;
	}
	v39 = *(_QWORD*)v12;
	if (((*(_DWORD*)(v8 + 12) >> 20) & 3) != 0)
	{
		if (((*(_DWORD*)(v8 + 12) >> 20) & 3) == 2)
		{
			*(_DWORD*)(v7 + 84) = 0;
			*(_QWORD*)v7 &= ~0x100000ui64;
		}
		else
		{
			*(_DWORD*)(v7 + 84) = *(_DWORD*)(v8 + 72);
			*(_QWORD*)v7 |= 0x100000ui64;
		}
	}
	else
	{
		*(_DWORD*)(v7 + 84) = *(_DWORD*)(v12 + 84);
		*(_QWORD*)v7 |= v39 & 0x100000;
	}
	*(_DWORD*)(v7 + 8) = *(_DWORD*)(v8 + 16);
	*(_QWORD*)v7 = *(_QWORD*)v7 & 0x3FFFFFFFFFFFFFFFi64 | 0x8000000000000000ui64;
	if (*(float*)(v7 + 24) < 0.0)
		*(_DWORD*)(v7 + 24) = 0;
	if (*(float*)(v7 + 28) < 0.0)
		*(_DWORD*)(v7 + 28) = 0;
	v40 = *(float*)(v7 + 24);
	v41 = *(float*)(v7 + 28);
	if (v40 > v41)
	{
		*(float*)(v7 + 24) = v41;
		*(float*)(v7 + 28) = v40;
	}
	return v7;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A058: using guessed type _DWORD dword_140C8A058[3];

