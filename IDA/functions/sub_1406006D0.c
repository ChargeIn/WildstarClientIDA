//----- (00000001406006D0) ----------------------------------------------------
void __fastcall sub_1406006D0(__int64 a1, float a2)
{
	__int64 v2; // rsi
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rdi

	v2 = qword_140C65BB0;
	v3 = *(_QWORD**)(qword_140C65BB0 + 8);
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		do
		{
			v5 = v4[2];
			v4 = (_QWORD*)*v4;
			sub_14061B900(v5, a2);
			if (*(_DWORD*)(v5 + 700))
				sub_1406012B0(v2, v5);
		} while (v4 != *(_QWORD**)(v2 + 8));
	}
}
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

