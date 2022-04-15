//----- (00000001405DA820) ----------------------------------------------------
void __fastcall sub_1405DA820(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rbp

	if (a2)
	{
		if (a3)
		{
			v6 = *(_QWORD**)(a3 + 8);
			v7 = (_QWORD*)*v6;
			if ((_QWORD*)*v6 != v6)
			{
				v8 = a4 + 31952;
				do
				{
					sub_1403FCB30(a2, (_DWORD*)v7[2], v8);
					v7 = (_QWORD*)*v7;
				} while (v7 != *(_QWORD**)(a3 + 8));
			}
		}
	}
}

