//----- (00000001400D40C0) ----------------------------------------------------
__int64 __fastcall sub_1400D40C0(__int64 a1)
{
	__int64 i; // rax

	for (i = *(_QWORD*)(a1 + 16); i; i = *(_QWORD*)(i + 16))
		a1 = i;
	return a1;
}

