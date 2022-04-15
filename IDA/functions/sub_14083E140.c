//----- (000000014083E140) ----------------------------------------------------
void __fastcall sub_14083E140(int a1, ULONG_PTR a2)
{
	ULONG_PTR Arguments[2]; // [rsp+20h] [rbp-28h] BYREF
	int v3; // [rsp+30h] [rbp-18h]
	int v4; // [rsp+34h] [rbp-14h]

	LODWORD(Arguments[0]) = 4096;
	Arguments[1] = a2;
	v3 = a1;
	v4 = 0;
	RaiseException(0x406D1388u, 0, 3u, Arguments);
}

