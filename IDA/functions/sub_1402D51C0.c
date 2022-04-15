//----- (00000001402D51C0) ----------------------------------------------------
void __fastcall sub_1402D51C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // r9
	__int64 i; // rbx
	int v8; // r8d
	_QWORD* v9; // rax
	unsigned int* v10; // r8
	float v11; // xmm0_4
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14[64]; // [rsp+20h] [rbp-208h]

	v5 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
	for (i = 0i64; ; v5 = v14[(unsigned int)i])
	{
		while (1)
		{
			v8 = *(_DWORD*)(v5 + 4);
			v9 = *(_QWORD**)a1;
			if (v8 < 0)
				break;
			v11 = *(float*)v5;
			v12 = v9[1] + (v8 & 0x7FFFFFF8);
			v13 = *(_DWORD*)(v5 + 4) & 3;
			if (*(float*)v5 <= *(float*)(a2 + 4 * v13 + 16))
			{
				v5 = v12;
				if (v11 >= *(float*)(a2 + 4 * v13))
				{
					v14[i] = v12 + 8;
					i = (unsigned int)(i + 1);
				}
			}
			else
			{
				v5 = v12 + 8;
			}
		}
		v10 = (unsigned int*)(v9[3] + (v8 & 0x7FFFFFF8));
		sub_1402D5280(a3, (unsigned int*)(v9[5] + 4i64 * *v10), v10[1]);
		if (!(_DWORD)i)
			break;
		i = (unsigned int)(i - 1);
	}
}
// 1402D51C0: using guessed type __int64 var_208[64];

