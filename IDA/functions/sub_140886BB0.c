//----- (0000000140886BB0) ----------------------------------------------------
void __fastcall sub_140886BB0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	char v3; // bp
	__int64 v6; // rbx
	_QWORD* v7; // rsi
	__int64 v8; // r15
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // [rsp+20h] [rbp-38h]

	v2 = *(unsigned __int8*)(a1 + 192);
	v3 = 0;
	if (*(_DWORD*)(a1 + 168) > (unsigned int)v2)
	{
		v6 = *(_QWORD*)(a1 + 176);
		v7 = 0i64;
		if (*(_BYTE*)(a1 + 192))
		{
			do
			{
				v7 = (_QWORD*)v6;
				v6 = *(_QWORD*)v6;
				--v2;
			} while (v2);
		}
		v8 = *(_QWORD*)(a1 + 96);
		EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
		if (v6)
		{
			do
			{
				if (v3 || *(_DWORD*)(*(_QWORD*)(v6 + 8) + 24i64) - *(_DWORD*)(v6 + 16) < a2)
				{
					v9 = *(_QWORD*)v6;
					v3 = 1;
					v11 = *(_QWORD*)v6;
					if (v6 == *(_QWORD*)(a1 + 176))
						*(_QWORD*)(a1 + 176) = v9;
					else
						*v7 = v9;
					if (v6 == *(_QWORD*)(a1 + 184))
						*(_QWORD*)(a1 + 184) = v7;
					--* (_DWORD*)(a1 + 168);
					sub_140883FE0(a1, v6);
					v6 = v11;
				}
				else
				{
					v7 = (_QWORD*)v6;
					v6 = *(_QWORD*)v6;
				}
			} while (v6);
			if (v3)
				sub_1408893C0(*(_QWORD*)(a1 + 96));
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
	}
	v10 = *(_QWORD*)(a1 + 200);
	if (v10 && (v3 || *(_DWORD*)(*(_QWORD*)(v10 + 8) + 24i64) - *(_DWORD*)(v10 + 16) < a2))
		sub_1408863A0(a1);
}

