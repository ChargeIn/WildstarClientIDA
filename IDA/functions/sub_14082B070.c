//----- (000000014082B070) ----------------------------------------------------
void __fastcall sub_14082B070(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64* i; // rbx
	int v6; // eax

	for (i = *(__int64**)(a1 + 72); i; i = (__int64*)*i)
	{
		v6 = *((_DWORD*)i + 4);
		if ((!v6 || v6 == a2) && (!a3 || i[3] == a3))
			(**(void(__fastcall***)(__int64, _QWORD))i[1])(i[1], a2);
	}
}

