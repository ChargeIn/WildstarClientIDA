//----- (000000014085F1F0) ----------------------------------------------------
char __fastcall sub_14085F1F0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rcx

	if (!a2)
		return 1;
	v3 = *(_QWORD*)(a1 + 160);
	if (v3)
		return sub_14084F160(v3, a2, 0i64, 0);
	else
		return 0;
}

