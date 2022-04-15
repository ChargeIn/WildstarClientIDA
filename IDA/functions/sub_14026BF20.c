//----- (000000014026BF20) ----------------------------------------------------
void __fastcall sub_14026BF20(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	int v4; // [rsp+40h] [rbp+8h] BYREF
	__int64 v5; // [rsp+50h] [rbp+18h] BYREF

	if (*(_DWORD*)(a1 + 10428))
	{
		if (!(unsigned int)sub_1408194D0(*(_QWORD*)(a1 + 6608), a2, (__int64)&v5))
		{
			v3 = *(_QWORD*)(a1 + 6608);
			v4 = 1;
			sub_140819670(v3, v5, 1u, 1u, (__int64)&v4);
		}
	}
}

