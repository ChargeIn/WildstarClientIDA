//----- (0000000140137E60) ----------------------------------------------------
void __fastcall sub_140137E60(__int64 a1, __int64* a2)
{
	unsigned __int64 v3; // rdx
	_QWORD** v5; // r8
	_QWORD* v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rsi
	int v10; // ebp
	int* v11; // rax
	int* v12; // r14

	v3 = 0i64;
	a2[1] = 0i64;
	if (*(_QWORD*)(a1 + 8))
	{
		v5 = *(_QWORD***)(a1 + 456);
		v6 = *v5;
		if (*v5 != v5)
		{
			do
			{
				v6 = (_QWORD*)*v6;
				++v3;
			} while (v6 != v5);
			sub_1400298E0(a2, v3);
			v7 = *(_QWORD**)(a1 + 456);
			v8 = (_QWORD*)*v7;
			if ((_QWORD*)*v7 != v7)
			{
				do
				{
					v9 = a2[1];
					v10 = *(_DWORD*)(v8[2] + 56i64);
					v11 = sub_14018DB00(*a2, v9 + 1, 4i64);
					v12 = v11;
					v11[v9] = v10;
					if ((int*)*a2 != v11)
					{
						sub_1407DB590(v11, (int*)*a2, 4 * a2[1]);
						if (*a2)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
						*a2 = (__int64)v12;
					}
					a2[1] = v9 + 1;
					v8 = (_QWORD*)*v8;
				} while (v8 != *(_QWORD**)(a1 + 456));
			}
		}
	}
}

