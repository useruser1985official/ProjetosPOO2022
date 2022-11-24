using System;

namespace POOBanco {
    abstract class Valor {
        protected float vale;
        protected string tipo;

        public abstract void apresentacao();

        public Valor(float vale, string tipo) {
            this.vale = vale;
            this.tipo = tipo;
        }

        public float Vale {
            get => this.vale;
            set => this.vale = value;
        }

        public string Tipo {
            get => this.tipo;
            set => this.tipo = value;
        }
    }
}
