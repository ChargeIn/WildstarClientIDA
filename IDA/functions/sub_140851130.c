//----- (0000000140851130) ----------------------------------------------------
char __fastcall sub_140851130(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v7; // rax
	__int64* v8; // rdx
	__int64 v9; // rdi
	__int64 v10; // rsi
	unsigned int v11; // ebp
	__int64 v12; // r9
	__int64 v13; // r8
	float v14; // xmm1_4
	float v15; // xmm1_4
	bool v16; // cf
	bool v17; // zf
	float v18; // xmm1_4
	bool v19; // cf
	bool v20; // zf
	float v21; // xmm1_4
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64* v25; // rdx
	__int64* v26; // r8
	char v28[40]; // [rsp+20h] [rbp-28h] BYREF

	v7 = sub_140850C90(a1, a2, v28);
	v8 = (__int64*)v7;
	if (!v28[0])
		return v7;
	v9 = *a1;
	v10 = (v7 - *a1) >> 3;
	v11 = ((a1[1] - *a1) >> 3) - 1;
	if ((_DWORD)v10)
	{
		v12 = (unsigned int)(v10 - 1);
		v13 = *(_QWORD*)(v9 + 8 * v12);
		v14 = *(float*)(v13 + 388);
		LOBYTE(v7) = *(float*)&a3 == v14 ? HIDWORD(a3) < *(_DWORD*)(v13 + 392) : *(float*)&a3 > v14;
		if ((_BYTE)v7)
		{
			if ((unsigned int)v10 <= 1
				|| ((v15 = *(float*)(*(_QWORD*)(v9 + 8i64 * (unsigned int)(v10 - 2)) + 388i64), *(float*)&a3 != v15)
					? (v16 = v15 < *(float*)&a3, v17 = v15 == *(float*)&a3)
					: (v16 = HIDWORD(a3) < *(_DWORD*)(*(_QWORD*)(v9 + 8i64 * (unsigned int)(v10 - 2)) + 392i64),
						v17 = HIDWORD(a3) == *(_DWORD*)(*(_QWORD*)(v9 + 8i64 * (unsigned int)(v10 - 2)) + 392i64)),
					!v16 && !v17))
			{
			LABEL_12:
				v7 = *v8;
				*(_QWORD*)(v9 + 8 * v12) = *v8;
				*v8 = v13;
				return v7;
			}
		LABEL_24:
			v23 = sub_140850C90(a1, a3, v28);
			if (v23)
			{
				v24 = (v23 - v9) >> 3;
				if ((unsigned int)v24 > (unsigned int)v10)
					LODWORD(v24) = v24 - 1;
			}
			else
			{
				LODWORD(v24) = v11;
			}
			v25 = (__int64*)(v9 + 8i64 * (unsigned int)v10);
			LOBYTE(v7) = v24;
			v26 = (__int64*)(v9 + 8i64 * (unsigned int)v24);
			if ((unsigned int)v24 >= (unsigned int)v10)
			{
				for (; v25 != v26; ++v25)
				{
					v7 = v25[1];
					*v25 = v7;
				}
			}
			else if (v25 != v26)
			{
				do
				{
					v7 = *--v25;
					v25[1] = v7;
				} while (v25 != v26);
				*v26 = a4;
				return v7;
			}
			*v26 = a4;
			return v7;
		}
	}
	if ((unsigned int)v10 < v11)
	{
		v12 = (unsigned int)(v10 + 1);
		v13 = *(_QWORD*)(v9 + 8 * v12);
		v18 = *(float*)(v13 + 388);
		if (*(float*)&a3 == v18)
		{
			v19 = HIDWORD(a3) < *(_DWORD*)(v13 + 392);
			v20 = HIDWORD(a3) == *(_DWORD*)(v13 + 392);
		}
		else
		{
			v19 = v18 < *(float*)&a3;
			v20 = v18 == *(float*)&a3;
		}
		LOBYTE(v7) = !v19 && !v20;
		if (!v19 && !v20)
		{
			if ((unsigned int)v10 >= (unsigned int)((a1[1] - *a1) >> 3) - 2)
				goto LABEL_12;
			v21 = *(float*)(*(_QWORD*)(v9 + 8i64 * (unsigned int)(v10 + 2)) + 388i64);
			if (*(float*)&a3 == v21
				? HIDWORD(a3) < *(_DWORD*)(*(_QWORD*)(v9 + 8i64 * (unsigned int)(v10 + 2)) + 392i64)
				: *(float*)&a3 > v21)
			{
				goto LABEL_12;
			}
			goto LABEL_24;
		}
	}
	return v7;
}
