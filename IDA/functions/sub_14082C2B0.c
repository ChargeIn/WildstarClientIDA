//----- (000000014082C2B0) ----------------------------------------------------
__int64 __fastcall sub_14082C2B0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rbx
	_QWORD* v4; // rsi
	__int64 v5; // r8
	__int64 v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // r8
	int v10; // r9d
	int v11; // r9d
	__int64 v12; // rax

	if (a2)
	{
		v3 = *(_QWORD**)(a1 + 96);
		v4 = 0i64;
		if (v3)
		{
			while (1)
			{
				v5 = v3[2];
				v6 = *(_QWORD*)(v5 + 8);
				if (v5 == a2)
					break;
				v4 = v3;
				v3 = (_QWORD*)*v3;
				if (!v3)
					goto LABEL_5;
			}
			v10 = 0;
			if (*(_WORD*)(v6 + 60) == 1283)
			{
				v11 = *(_DWORD*)(v6 + 240);
				*(_DWORD*)(v6 + 240) = 0;
				v10 = v11 - 1;
			}
			sub_14082BF30(a1, *(_DWORD*)(v6 + 56), v5, v10);
			v12 = *v3;
			if (v3 == *(_QWORD**)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v12;
			else
				*v4 = v12;
			if (v3 == *(_QWORD**)(a1 + 104))
				*(_QWORD*)(a1 + 104) = v4;
			*v3 = *(_QWORD*)(a1 + 112);
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v3;
		}
		else
		{
		LABEL_5:
			v7 = *(_QWORD**)(a1 + 144);
			if (v7)
			{
				while (1)
				{
					v8 = v7[2];
					v9 = *(_QWORD*)(v8 + 8);
					if (v8 == a2)
						break;
					v7 = (_QWORD*)*v7;
					if (!v7)
						return 1i64;
				}
				if (*(_WORD*)(v9 + 60) == 1283)
					*(_DWORD*)(v8 + 64) += *(_DWORD*)(v9 + 240);
				else
					++* (_DWORD*)(v8 + 64);
			}
		}
	}
	return 1i64;
}

