//----- (00000001405D95A0) ----------------------------------------------------
void __fastcall sub_1405D95A0(__int64 a1, unsigned int a2, __int64 a3)
{
	_QWORD* v3; // rax
	_QWORD* v5; // rbx

	if (a3)
	{
		v3 = *(_QWORD**)(a3 + 8);
		v5 = (_QWORD*)*v3;
		if ((_QWORD*)*v3 != v3)
		{
			do
			{
				sub_1403FCF80(a2, (_DWORD*)v5[2], qword_140C65898 + 31984);
				v5 = (_QWORD*)*v5;
			} while (v5 != *(_QWORD**)(a3 + 8));
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

