//----- (00000001405CCF20) ----------------------------------------------------
void __fastcall sub_1405CCF20(__int64 a1, __int64 a2, _QWORD* a3, double a4)
{
	int v4; // eax
	__int64 v6; // rcx
	__int64 v8; // rdx
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax

	v4 = *(_DWORD*)(a1 + 84);
	v6 = a1 + 128;
	*(_DWORD*)(a2 + 4) += v4;
	v8 = *(unsigned int*)(a2 + 4);
	if (**(_QWORD**)(v6 + 8) == *(_QWORD*)(v6 + 8))
	{
		sub_1405CFA10(v6, (_QWORD*)a2);
	}
	else
	{
		v9 = *(_QWORD**)(a1 + 136);
		v10 = (_QWORD*)*v9;
		if ((_QWORD*)*v9 != v9)
		{
			while (*((_DWORD*)v10 + 5) <= (unsigned int)v8)
			{
				v10 = (_QWORD*)*v10;
				if (v10 == v9)
					goto LABEL_10;
			}
			v8 = (__int64)sub_14018B280(72i64, 0);
			a3 = (_QWORD*)(v8 + 16);
			if (v8 != -16)
			{
				v11 = *(_QWORD*)(a2 + 32);
				*a3 = *(_QWORD*)a2;
				*(_QWORD*)(v8 + 24) = *(_QWORD*)(a2 + 8);
				*(_QWORD*)(v8 + 32) = *(_QWORD*)(a2 + 16);
				*(_QWORD*)(v8 + 40) = *(_QWORD*)(a2 + 24);
				*(_QWORD*)(v8 + 48) = v11;
				*(_QWORD*)(v8 + 56) = *(_QWORD*)(a2 + 40);
				*(_QWORD*)(v8 + 64) = *(_QWORD*)(a2 + 48);
			}
			*(_QWORD*)v8 = v10;
			*(_QWORD*)(v8 + 8) = v10[1];
			*(_QWORD*)v10[1] = v8;
			v10[1] = v8;
		}
	LABEL_10:
		if (v10 == *(_QWORD**)(a1 + 136))
		{
			v8 = (__int64)sub_14018B280(72i64, 0);
			a3 = (_QWORD*)(v8 + 16);
			if (v8 != -16)
			{
				v12 = *(_QWORD*)(a2 + 32);
				*a3 = *(_QWORD*)a2;
				*(_QWORD*)(v8 + 24) = *(_QWORD*)(a2 + 8);
				*(_QWORD*)(v8 + 32) = *(_QWORD*)(a2 + 16);
				*(_QWORD*)(v8 + 40) = *(_QWORD*)(a2 + 24);
				*(_QWORD*)(v8 + 48) = v12;
				*(_QWORD*)(v8 + 56) = *(_QWORD*)(a2 + 40);
				*(_QWORD*)(v8 + 64) = *(_QWORD*)(a2 + 48);
			}
			*(_QWORD*)v8 = v10;
			*(_QWORD*)(v8 + 8) = v10[1];
			*(_QWORD*)v10[1] = v8;
			v10[1] = v8;
		}
	}
	if (*(_DWORD*)(a1 + 24))
		sub_1405CD070(a1, v8, (__int64)a3, a4);
}
// 1405CD05C: variable 'v8' is possibly undefined
// 1405CD05C: variable 'a3' is possibly undefined

